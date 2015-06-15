#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCache.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache
extern TypeInfo FactoryCache_t1264_il2cpp_TypeInfo;
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCacheMethodDeclarations.h"
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo FactoryCache_t1264_FactoryCache__ctor_m5590_ParameterInfos[] = 
{
	{"capacity", 0, 134218210, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
MethodInfo FactoryCache__ctor_m5590_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FactoryCache__ctor_m5590/* method */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, FactoryCache_t1264_FactoryCache__ctor_m5590_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1268_0_0_0;
extern Il2CppType RegexOptions_t1268_0_0_0;
extern Il2CppType IMachineFactory_t1265_0_0_0;
extern Il2CppType IMachineFactory_t1265_0_0_0;
static ParameterInfo FactoryCache_t1264_FactoryCache_Add_m5591_ParameterInfos[] = 
{
	{"pattern", 0, 134218211, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218212, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
	{"factory", 2, 134218213, &EmptyCustomAttributesCache, &IMachineFactory_t1265_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
MethodInfo FactoryCache_Add_m5591_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&FactoryCache_Add_m5591/* method */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Object_t/* invoker_method */
	, FactoryCache_t1264_FactoryCache_Add_m5591_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
MethodInfo FactoryCache_Cleanup_m5592_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&FactoryCache_Cleanup_m5592/* method */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo FactoryCache_t1264_FactoryCache_Lookup_m5593_ParameterInfos[] = 
{
	{"pattern", 0, 134218214, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218215, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType IMachineFactory_t1265_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo FactoryCache_Lookup_m5593_MethodInfo = 
{
	"Lookup"/* name */
	, (methodPointerType)&FactoryCache_Lookup_m5593/* method */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1265_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t188/* invoker_method */
	, FactoryCache_t1264_FactoryCache_Lookup_m5593_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FactoryCache_t1264_MethodInfos[] =
{
	&FactoryCache__ctor_m5590_MethodInfo,
	&FactoryCache_Add_m5591_MethodInfo,
	&FactoryCache_Cleanup_m5592_MethodInfo,
	&FactoryCache_Lookup_m5593_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo FactoryCache_t1264____capacity_0_FieldInfo = 
{
	"capacity"/* name */
	, &Int32_t188_0_0_1/* type */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1264, ___capacity_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1149_0_0_1;
FieldInfo FactoryCache_t1264____factories_1_FieldInfo = 
{
	"factories"/* name */
	, &Hashtable_t1149_0_0_1/* type */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1264, ___factories_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MRUList_t1273_0_0_1;
FieldInfo FactoryCache_t1264____mru_list_2_FieldInfo = 
{
	"mru_list"/* name */
	, &MRUList_t1273_0_0_1/* type */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1264, ___mru_list_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FactoryCache_t1264_FieldInfos[] =
{
	&FactoryCache_t1264____capacity_0_FieldInfo,
	&FactoryCache_t1264____factories_1_FieldInfo,
	&FactoryCache_t1264____mru_list_2_FieldInfo,
	NULL
};
extern Il2CppType Key_t1272_0_0_0;
static const Il2CppType* FactoryCache_t1264_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Key_t1272_0_0_0,
};
extern MethodInfo Object_Equals_m1096_MethodInfo;
extern MethodInfo Object_Finalize_m1068_MethodInfo;
extern MethodInfo Object_GetHashCode_m1097_MethodInfo;
extern MethodInfo Object_ToString_m1098_MethodInfo;
static Il2CppMethodReference FactoryCache_t1264_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool FactoryCache_t1264_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType FactoryCache_t1264_0_0_0;
extern Il2CppType FactoryCache_t1264_1_0_0;
extern Il2CppType Object_t_0_0_0;
struct FactoryCache_t1264;
const Il2CppTypeDefinitionMetadata FactoryCache_t1264_DefinitionMetadata = 
{
	NULL/* declaringType */
	, FactoryCache_t1264_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FactoryCache_t1264_VTable/* vtableMethods */
	, FactoryCache_t1264_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo FactoryCache_t1264_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "FactoryCache"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, FactoryCache_t1264_MethodInfos/* methods */
	, NULL/* properties */
	, FactoryCache_t1264_FieldInfos/* fields */
	, NULL/* events */
	, &FactoryCache_t1264_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FactoryCache_t1264_0_0_0/* byval_arg */
	, &FactoryCache_t1264_1_0_0/* this_arg */
	, &FactoryCache_t1264_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FactoryCache_t1264)/* instance_size */
	, sizeof (FactoryCache_t1264)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_Node.h"
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern TypeInfo Node_t1274_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_NodeMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Node_t1274_Node__ctor_m5594_ParameterInfos[] = 
{
	{"value", 0, 134218220, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList/Node::.ctor(System.Object)
MethodInfo Node__ctor_m5594_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Node__ctor_m5594/* method */
	, &Node_t1274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Node_t1274_Node__ctor_m5594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Node_t1274_MethodInfos[] =
{
	&Node__ctor_m5594_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_6;
FieldInfo Node_t1274____value_0_FieldInfo = 
{
	"value"/* name */
	, &Object_t_0_0_6/* type */
	, &Node_t1274_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1274, ___value_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1274_0_0_6;
FieldInfo Node_t1274____previous_1_FieldInfo = 
{
	"previous"/* name */
	, &Node_t1274_0_0_6/* type */
	, &Node_t1274_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1274, ___previous_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1274_0_0_6;
FieldInfo Node_t1274____next_2_FieldInfo = 
{
	"next"/* name */
	, &Node_t1274_0_0_6/* type */
	, &Node_t1274_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1274, ___next_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Node_t1274_FieldInfos[] =
{
	&Node_t1274____value_0_FieldInfo,
	&Node_t1274____previous_1_FieldInfo,
	&Node_t1274____next_2_FieldInfo,
	NULL
};
static Il2CppMethodReference Node_t1274_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool Node_t1274_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Node_t1274_0_0_0;
extern Il2CppType Node_t1274_1_0_0;
extern TypeInfo MRUList_t1273_il2cpp_TypeInfo;
extern Il2CppType MRUList_t1273_0_0_0;
struct Node_t1274;
const Il2CppTypeDefinitionMetadata Node_t1274_DefinitionMetadata = 
{
	&MRUList_t1273_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Node_t1274_VTable/* vtableMethods */
	, Node_t1274_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Node_t1274_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Node"/* name */
	, ""/* namespaze */
	, Node_t1274_MethodInfos/* methods */
	, NULL/* properties */
	, Node_t1274_FieldInfos/* fields */
	, NULL/* events */
	, &Node_t1274_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Node_t1274_0_0_0/* byval_arg */
	, &Node_t1274_1_0_0/* this_arg */
	, &Node_t1274_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Node_t1274)/* instance_size */
	, sizeof (Node_t1274)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUList.h"
// Metadata Definition System.Text.RegularExpressions.MRUList
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUListMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::.ctor()
MethodInfo MRUList__ctor_m5595_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MRUList__ctor_m5595/* method */
	, &MRUList_t1273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MRUList_t1273_MRUList_Use_m5596_ParameterInfos[] = 
{
	{"o", 0, 134218219, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
MethodInfo MRUList_Use_m5596_MethodInfo = 
{
	"Use"/* name */
	, (methodPointerType)&MRUList_Use_m5596/* method */
	, &MRUList_t1273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, MRUList_t1273_MRUList_Use_m5596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.MRUList::Evict()
MethodInfo MRUList_Evict_m5597_MethodInfo = 
{
	"Evict"/* name */
	, (methodPointerType)&MRUList_Evict_m5597/* method */
	, &MRUList_t1273_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MRUList_t1273_MethodInfos[] =
{
	&MRUList__ctor_m5595_MethodInfo,
	&MRUList_Use_m5596_MethodInfo,
	&MRUList_Evict_m5597_MethodInfo,
	NULL
};
extern Il2CppType Node_t1274_0_0_1;
FieldInfo MRUList_t1273____head_0_FieldInfo = 
{
	"head"/* name */
	, &Node_t1274_0_0_1/* type */
	, &MRUList_t1273_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1273, ___head_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1274_0_0_1;
FieldInfo MRUList_t1273____tail_1_FieldInfo = 
{
	"tail"/* name */
	, &Node_t1274_0_0_1/* type */
	, &MRUList_t1273_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1273, ___tail_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* MRUList_t1273_FieldInfos[] =
{
	&MRUList_t1273____head_0_FieldInfo,
	&MRUList_t1273____tail_1_FieldInfo,
	NULL
};
static const Il2CppType* MRUList_t1273_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Node_t1274_0_0_0,
};
static Il2CppMethodReference MRUList_t1273_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool MRUList_t1273_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MRUList_t1273_1_0_0;
struct MRUList_t1273;
const Il2CppTypeDefinitionMetadata MRUList_t1273_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MRUList_t1273_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MRUList_t1273_VTable/* vtableMethods */
	, MRUList_t1273_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo MRUList_t1273_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MRUList"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MRUList_t1273_MethodInfos/* methods */
	, NULL/* properties */
	, MRUList_t1273_FieldInfos/* fields */
	, NULL/* events */
	, &MRUList_t1273_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MRUList_t1273_0_0_0/* byval_arg */
	, &MRUList_t1273_1_0_0/* this_arg */
	, &MRUList_t1273_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MRUList_t1273)/* instance_size */
	, sizeof (MRUList_t1273)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// Metadata Definition System.Text.RegularExpressions.Category
extern TypeInfo Category_t1275_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_CategoryMethodDeclarations.h"
static MethodInfo* Category_t1275_MethodInfos[] =
{
	NULL
};
extern Il2CppType UInt16_t915_0_0_1542;
FieldInfo Category_t1275____value___1_FieldInfo = 
{
	"value__"/* name */
	, &UInt16_t915_0_0_1542/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, offsetof(Category_t1275, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____None_2_FieldInfo = 
{
	"None"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____Any_3_FieldInfo = 
{
	"Any"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____AnySingleline_4_FieldInfo = 
{
	"AnySingleline"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____Word_5_FieldInfo = 
{
	"Word"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____Digit_6_FieldInfo = 
{
	"Digit"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____WhiteSpace_7_FieldInfo = 
{
	"WhiteSpace"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____EcmaAny_8_FieldInfo = 
{
	"EcmaAny"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____EcmaAnySingleline_9_FieldInfo = 
{
	"EcmaAnySingleline"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____EcmaWord_10_FieldInfo = 
{
	"EcmaWord"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____EcmaDigit_11_FieldInfo = 
{
	"EcmaDigit"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____EcmaWhiteSpace_12_FieldInfo = 
{
	"EcmaWhiteSpace"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeL_13_FieldInfo = 
{
	"UnicodeL"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeM_14_FieldInfo = 
{
	"UnicodeM"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeN_15_FieldInfo = 
{
	"UnicodeN"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeZ_16_FieldInfo = 
{
	"UnicodeZ"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeP_17_FieldInfo = 
{
	"UnicodeP"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeS_18_FieldInfo = 
{
	"UnicodeS"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeC_19_FieldInfo = 
{
	"UnicodeC"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLu_20_FieldInfo = 
{
	"UnicodeLu"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLl_21_FieldInfo = 
{
	"UnicodeLl"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLt_22_FieldInfo = 
{
	"UnicodeLt"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLm_23_FieldInfo = 
{
	"UnicodeLm"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLo_24_FieldInfo = 
{
	"UnicodeLo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMn_25_FieldInfo = 
{
	"UnicodeMn"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMe_26_FieldInfo = 
{
	"UnicodeMe"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMc_27_FieldInfo = 
{
	"UnicodeMc"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeNd_28_FieldInfo = 
{
	"UnicodeNd"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeNl_29_FieldInfo = 
{
	"UnicodeNl"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeNo_30_FieldInfo = 
{
	"UnicodeNo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeZs_31_FieldInfo = 
{
	"UnicodeZs"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeZl_32_FieldInfo = 
{
	"UnicodeZl"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeZp_33_FieldInfo = 
{
	"UnicodeZp"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePd_34_FieldInfo = 
{
	"UnicodePd"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePs_35_FieldInfo = 
{
	"UnicodePs"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePi_36_FieldInfo = 
{
	"UnicodePi"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePe_37_FieldInfo = 
{
	"UnicodePe"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePf_38_FieldInfo = 
{
	"UnicodePf"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePc_39_FieldInfo = 
{
	"UnicodePc"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePo_40_FieldInfo = 
{
	"UnicodePo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSm_41_FieldInfo = 
{
	"UnicodeSm"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSc_42_FieldInfo = 
{
	"UnicodeSc"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSk_43_FieldInfo = 
{
	"UnicodeSk"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSo_44_FieldInfo = 
{
	"UnicodeSo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCc_45_FieldInfo = 
{
	"UnicodeCc"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCf_46_FieldInfo = 
{
	"UnicodeCf"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCo_47_FieldInfo = 
{
	"UnicodeCo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCs_48_FieldInfo = 
{
	"UnicodeCs"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCn_49_FieldInfo = 
{
	"UnicodeCn"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBasicLatin_50_FieldInfo = 
{
	"UnicodeBasicLatin"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLatin1Supplement_51_FieldInfo = 
{
	"UnicodeLatin1Supplement"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLatinExtendedA_52_FieldInfo = 
{
	"UnicodeLatinExtendedA"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLatinExtendedB_53_FieldInfo = 
{
	"UnicodeLatinExtendedB"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeIPAExtensions_54_FieldInfo = 
{
	"UnicodeIPAExtensions"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSpacingModifierLetters_55_FieldInfo = 
{
	"UnicodeSpacingModifierLetters"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCombiningDiacriticalMarks_56_FieldInfo = 
{
	"UnicodeCombiningDiacriticalMarks"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGreek_57_FieldInfo = 
{
	"UnicodeGreek"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCyrillic_58_FieldInfo = 
{
	"UnicodeCyrillic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeArmenian_59_FieldInfo = 
{
	"UnicodeArmenian"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHebrew_60_FieldInfo = 
{
	"UnicodeHebrew"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeArabic_61_FieldInfo = 
{
	"UnicodeArabic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSyriac_62_FieldInfo = 
{
	"UnicodeSyriac"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeThaana_63_FieldInfo = 
{
	"UnicodeThaana"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeDevanagari_64_FieldInfo = 
{
	"UnicodeDevanagari"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBengali_65_FieldInfo = 
{
	"UnicodeBengali"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGurmukhi_66_FieldInfo = 
{
	"UnicodeGurmukhi"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGujarati_67_FieldInfo = 
{
	"UnicodeGujarati"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeOriya_68_FieldInfo = 
{
	"UnicodeOriya"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeTamil_69_FieldInfo = 
{
	"UnicodeTamil"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeTelugu_70_FieldInfo = 
{
	"UnicodeTelugu"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeKannada_71_FieldInfo = 
{
	"UnicodeKannada"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMalayalam_72_FieldInfo = 
{
	"UnicodeMalayalam"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSinhala_73_FieldInfo = 
{
	"UnicodeSinhala"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeThai_74_FieldInfo = 
{
	"UnicodeThai"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLao_75_FieldInfo = 
{
	"UnicodeLao"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeTibetan_76_FieldInfo = 
{
	"UnicodeTibetan"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMyanmar_77_FieldInfo = 
{
	"UnicodeMyanmar"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGeorgian_78_FieldInfo = 
{
	"UnicodeGeorgian"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHangulJamo_79_FieldInfo = 
{
	"UnicodeHangulJamo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeEthiopic_80_FieldInfo = 
{
	"UnicodeEthiopic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCherokee_81_FieldInfo = 
{
	"UnicodeCherokee"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo = 
{
	"UnicodeUnifiedCanadianAboriginalSyllabics"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeOgham_83_FieldInfo = 
{
	"UnicodeOgham"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeRunic_84_FieldInfo = 
{
	"UnicodeRunic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeKhmer_85_FieldInfo = 
{
	"UnicodeKhmer"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMongolian_86_FieldInfo = 
{
	"UnicodeMongolian"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLatinExtendedAdditional_87_FieldInfo = 
{
	"UnicodeLatinExtendedAdditional"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGreekExtended_88_FieldInfo = 
{
	"UnicodeGreekExtended"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGeneralPunctuation_89_FieldInfo = 
{
	"UnicodeGeneralPunctuation"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSuperscriptsandSubscripts_90_FieldInfo = 
{
	"UnicodeSuperscriptsandSubscripts"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCurrencySymbols_91_FieldInfo = 
{
	"UnicodeCurrencySymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCombiningMarksforSymbols_92_FieldInfo = 
{
	"UnicodeCombiningMarksforSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLetterlikeSymbols_93_FieldInfo = 
{
	"UnicodeLetterlikeSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeNumberForms_94_FieldInfo = 
{
	"UnicodeNumberForms"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeArrows_95_FieldInfo = 
{
	"UnicodeArrows"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMathematicalOperators_96_FieldInfo = 
{
	"UnicodeMathematicalOperators"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMiscellaneousTechnical_97_FieldInfo = 
{
	"UnicodeMiscellaneousTechnical"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeControlPictures_98_FieldInfo = 
{
	"UnicodeControlPictures"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeOpticalCharacterRecognition_99_FieldInfo = 
{
	"UnicodeOpticalCharacterRecognition"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeEnclosedAlphanumerics_100_FieldInfo = 
{
	"UnicodeEnclosedAlphanumerics"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBoxDrawing_101_FieldInfo = 
{
	"UnicodeBoxDrawing"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBlockElements_102_FieldInfo = 
{
	"UnicodeBlockElements"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGeometricShapes_103_FieldInfo = 
{
	"UnicodeGeometricShapes"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMiscellaneousSymbols_104_FieldInfo = 
{
	"UnicodeMiscellaneousSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeDingbats_105_FieldInfo = 
{
	"UnicodeDingbats"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBraillePatterns_106_FieldInfo = 
{
	"UnicodeBraillePatterns"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKRadicalsSupplement_107_FieldInfo = 
{
	"UnicodeCJKRadicalsSupplement"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeKangxiRadicals_108_FieldInfo = 
{
	"UnicodeKangxiRadicals"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeIdeographicDescriptionCharacters_109_FieldInfo = 
{
	"UnicodeIdeographicDescriptionCharacters"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKSymbolsandPunctuation_110_FieldInfo = 
{
	"UnicodeCJKSymbolsandPunctuation"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHiragana_111_FieldInfo = 
{
	"UnicodeHiragana"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeKatakana_112_FieldInfo = 
{
	"UnicodeKatakana"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBopomofo_113_FieldInfo = 
{
	"UnicodeBopomofo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHangulCompatibilityJamo_114_FieldInfo = 
{
	"UnicodeHangulCompatibilityJamo"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeKanbun_115_FieldInfo = 
{
	"UnicodeKanbun"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeBopomofoExtended_116_FieldInfo = 
{
	"UnicodeBopomofoExtended"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo = 
{
	"UnicodeEnclosedCJKLettersandMonths"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKCompatibility_118_FieldInfo = 
{
	"UnicodeCJKCompatibility"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionA"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKUnifiedIdeographs_120_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographs"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeYiSyllables_121_FieldInfo = 
{
	"UnicodeYiSyllables"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeYiRadicals_122_FieldInfo = 
{
	"UnicodeYiRadicals"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHangulSyllables_123_FieldInfo = 
{
	"UnicodeHangulSyllables"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHighSurrogates_124_FieldInfo = 
{
	"UnicodeHighSurrogates"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHighPrivateUseSurrogates_125_FieldInfo = 
{
	"UnicodeHighPrivateUseSurrogates"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeLowSurrogates_126_FieldInfo = 
{
	"UnicodeLowSurrogates"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodePrivateUse_127_FieldInfo = 
{
	"UnicodePrivateUse"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKCompatibilityIdeographs_128_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographs"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeAlphabeticPresentationForms_129_FieldInfo = 
{
	"UnicodeAlphabeticPresentationForms"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeArabicPresentationFormsA_130_FieldInfo = 
{
	"UnicodeArabicPresentationFormsA"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCombiningHalfMarks_131_FieldInfo = 
{
	"UnicodeCombiningHalfMarks"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKCompatibilityForms_132_FieldInfo = 
{
	"UnicodeCJKCompatibilityForms"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSmallFormVariants_133_FieldInfo = 
{
	"UnicodeSmallFormVariants"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeArabicPresentationFormsB_134_FieldInfo = 
{
	"UnicodeArabicPresentationFormsB"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeSpecials_135_FieldInfo = 
{
	"UnicodeSpecials"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeHalfwidthandFullwidthForms_136_FieldInfo = 
{
	"UnicodeHalfwidthandFullwidthForms"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeOldItalic_137_FieldInfo = 
{
	"UnicodeOldItalic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeGothic_138_FieldInfo = 
{
	"UnicodeGothic"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeDeseret_139_FieldInfo = 
{
	"UnicodeDeseret"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeByzantineMusicalSymbols_140_FieldInfo = 
{
	"UnicodeByzantineMusicalSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMusicalSymbols_141_FieldInfo = 
{
	"UnicodeMusicalSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo = 
{
	"UnicodeMathematicalAlphanumericSymbols"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionB"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographsSupplement"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____UnicodeTags_145_FieldInfo = 
{
	"UnicodeTags"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1275_0_0_32854;
FieldInfo Category_t1275____LastValue_146_FieldInfo = 
{
	"LastValue"/* name */
	, &Category_t1275_0_0_32854/* type */
	, &Category_t1275_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Category_t1275_FieldInfos[] =
{
	&Category_t1275____value___1_FieldInfo,
	&Category_t1275____None_2_FieldInfo,
	&Category_t1275____Any_3_FieldInfo,
	&Category_t1275____AnySingleline_4_FieldInfo,
	&Category_t1275____Word_5_FieldInfo,
	&Category_t1275____Digit_6_FieldInfo,
	&Category_t1275____WhiteSpace_7_FieldInfo,
	&Category_t1275____EcmaAny_8_FieldInfo,
	&Category_t1275____EcmaAnySingleline_9_FieldInfo,
	&Category_t1275____EcmaWord_10_FieldInfo,
	&Category_t1275____EcmaDigit_11_FieldInfo,
	&Category_t1275____EcmaWhiteSpace_12_FieldInfo,
	&Category_t1275____UnicodeL_13_FieldInfo,
	&Category_t1275____UnicodeM_14_FieldInfo,
	&Category_t1275____UnicodeN_15_FieldInfo,
	&Category_t1275____UnicodeZ_16_FieldInfo,
	&Category_t1275____UnicodeP_17_FieldInfo,
	&Category_t1275____UnicodeS_18_FieldInfo,
	&Category_t1275____UnicodeC_19_FieldInfo,
	&Category_t1275____UnicodeLu_20_FieldInfo,
	&Category_t1275____UnicodeLl_21_FieldInfo,
	&Category_t1275____UnicodeLt_22_FieldInfo,
	&Category_t1275____UnicodeLm_23_FieldInfo,
	&Category_t1275____UnicodeLo_24_FieldInfo,
	&Category_t1275____UnicodeMn_25_FieldInfo,
	&Category_t1275____UnicodeMe_26_FieldInfo,
	&Category_t1275____UnicodeMc_27_FieldInfo,
	&Category_t1275____UnicodeNd_28_FieldInfo,
	&Category_t1275____UnicodeNl_29_FieldInfo,
	&Category_t1275____UnicodeNo_30_FieldInfo,
	&Category_t1275____UnicodeZs_31_FieldInfo,
	&Category_t1275____UnicodeZl_32_FieldInfo,
	&Category_t1275____UnicodeZp_33_FieldInfo,
	&Category_t1275____UnicodePd_34_FieldInfo,
	&Category_t1275____UnicodePs_35_FieldInfo,
	&Category_t1275____UnicodePi_36_FieldInfo,
	&Category_t1275____UnicodePe_37_FieldInfo,
	&Category_t1275____UnicodePf_38_FieldInfo,
	&Category_t1275____UnicodePc_39_FieldInfo,
	&Category_t1275____UnicodePo_40_FieldInfo,
	&Category_t1275____UnicodeSm_41_FieldInfo,
	&Category_t1275____UnicodeSc_42_FieldInfo,
	&Category_t1275____UnicodeSk_43_FieldInfo,
	&Category_t1275____UnicodeSo_44_FieldInfo,
	&Category_t1275____UnicodeCc_45_FieldInfo,
	&Category_t1275____UnicodeCf_46_FieldInfo,
	&Category_t1275____UnicodeCo_47_FieldInfo,
	&Category_t1275____UnicodeCs_48_FieldInfo,
	&Category_t1275____UnicodeCn_49_FieldInfo,
	&Category_t1275____UnicodeBasicLatin_50_FieldInfo,
	&Category_t1275____UnicodeLatin1Supplement_51_FieldInfo,
	&Category_t1275____UnicodeLatinExtendedA_52_FieldInfo,
	&Category_t1275____UnicodeLatinExtendedB_53_FieldInfo,
	&Category_t1275____UnicodeIPAExtensions_54_FieldInfo,
	&Category_t1275____UnicodeSpacingModifierLetters_55_FieldInfo,
	&Category_t1275____UnicodeCombiningDiacriticalMarks_56_FieldInfo,
	&Category_t1275____UnicodeGreek_57_FieldInfo,
	&Category_t1275____UnicodeCyrillic_58_FieldInfo,
	&Category_t1275____UnicodeArmenian_59_FieldInfo,
	&Category_t1275____UnicodeHebrew_60_FieldInfo,
	&Category_t1275____UnicodeArabic_61_FieldInfo,
	&Category_t1275____UnicodeSyriac_62_FieldInfo,
	&Category_t1275____UnicodeThaana_63_FieldInfo,
	&Category_t1275____UnicodeDevanagari_64_FieldInfo,
	&Category_t1275____UnicodeBengali_65_FieldInfo,
	&Category_t1275____UnicodeGurmukhi_66_FieldInfo,
	&Category_t1275____UnicodeGujarati_67_FieldInfo,
	&Category_t1275____UnicodeOriya_68_FieldInfo,
	&Category_t1275____UnicodeTamil_69_FieldInfo,
	&Category_t1275____UnicodeTelugu_70_FieldInfo,
	&Category_t1275____UnicodeKannada_71_FieldInfo,
	&Category_t1275____UnicodeMalayalam_72_FieldInfo,
	&Category_t1275____UnicodeSinhala_73_FieldInfo,
	&Category_t1275____UnicodeThai_74_FieldInfo,
	&Category_t1275____UnicodeLao_75_FieldInfo,
	&Category_t1275____UnicodeTibetan_76_FieldInfo,
	&Category_t1275____UnicodeMyanmar_77_FieldInfo,
	&Category_t1275____UnicodeGeorgian_78_FieldInfo,
	&Category_t1275____UnicodeHangulJamo_79_FieldInfo,
	&Category_t1275____UnicodeEthiopic_80_FieldInfo,
	&Category_t1275____UnicodeCherokee_81_FieldInfo,
	&Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo,
	&Category_t1275____UnicodeOgham_83_FieldInfo,
	&Category_t1275____UnicodeRunic_84_FieldInfo,
	&Category_t1275____UnicodeKhmer_85_FieldInfo,
	&Category_t1275____UnicodeMongolian_86_FieldInfo,
	&Category_t1275____UnicodeLatinExtendedAdditional_87_FieldInfo,
	&Category_t1275____UnicodeGreekExtended_88_FieldInfo,
	&Category_t1275____UnicodeGeneralPunctuation_89_FieldInfo,
	&Category_t1275____UnicodeSuperscriptsandSubscripts_90_FieldInfo,
	&Category_t1275____UnicodeCurrencySymbols_91_FieldInfo,
	&Category_t1275____UnicodeCombiningMarksforSymbols_92_FieldInfo,
	&Category_t1275____UnicodeLetterlikeSymbols_93_FieldInfo,
	&Category_t1275____UnicodeNumberForms_94_FieldInfo,
	&Category_t1275____UnicodeArrows_95_FieldInfo,
	&Category_t1275____UnicodeMathematicalOperators_96_FieldInfo,
	&Category_t1275____UnicodeMiscellaneousTechnical_97_FieldInfo,
	&Category_t1275____UnicodeControlPictures_98_FieldInfo,
	&Category_t1275____UnicodeOpticalCharacterRecognition_99_FieldInfo,
	&Category_t1275____UnicodeEnclosedAlphanumerics_100_FieldInfo,
	&Category_t1275____UnicodeBoxDrawing_101_FieldInfo,
	&Category_t1275____UnicodeBlockElements_102_FieldInfo,
	&Category_t1275____UnicodeGeometricShapes_103_FieldInfo,
	&Category_t1275____UnicodeMiscellaneousSymbols_104_FieldInfo,
	&Category_t1275____UnicodeDingbats_105_FieldInfo,
	&Category_t1275____UnicodeBraillePatterns_106_FieldInfo,
	&Category_t1275____UnicodeCJKRadicalsSupplement_107_FieldInfo,
	&Category_t1275____UnicodeKangxiRadicals_108_FieldInfo,
	&Category_t1275____UnicodeIdeographicDescriptionCharacters_109_FieldInfo,
	&Category_t1275____UnicodeCJKSymbolsandPunctuation_110_FieldInfo,
	&Category_t1275____UnicodeHiragana_111_FieldInfo,
	&Category_t1275____UnicodeKatakana_112_FieldInfo,
	&Category_t1275____UnicodeBopomofo_113_FieldInfo,
	&Category_t1275____UnicodeHangulCompatibilityJamo_114_FieldInfo,
	&Category_t1275____UnicodeKanbun_115_FieldInfo,
	&Category_t1275____UnicodeBopomofoExtended_116_FieldInfo,
	&Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo,
	&Category_t1275____UnicodeCJKCompatibility_118_FieldInfo,
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo,
	&Category_t1275____UnicodeCJKUnifiedIdeographs_120_FieldInfo,
	&Category_t1275____UnicodeYiSyllables_121_FieldInfo,
	&Category_t1275____UnicodeYiRadicals_122_FieldInfo,
	&Category_t1275____UnicodeHangulSyllables_123_FieldInfo,
	&Category_t1275____UnicodeHighSurrogates_124_FieldInfo,
	&Category_t1275____UnicodeHighPrivateUseSurrogates_125_FieldInfo,
	&Category_t1275____UnicodeLowSurrogates_126_FieldInfo,
	&Category_t1275____UnicodePrivateUse_127_FieldInfo,
	&Category_t1275____UnicodeCJKCompatibilityIdeographs_128_FieldInfo,
	&Category_t1275____UnicodeAlphabeticPresentationForms_129_FieldInfo,
	&Category_t1275____UnicodeArabicPresentationFormsA_130_FieldInfo,
	&Category_t1275____UnicodeCombiningHalfMarks_131_FieldInfo,
	&Category_t1275____UnicodeCJKCompatibilityForms_132_FieldInfo,
	&Category_t1275____UnicodeSmallFormVariants_133_FieldInfo,
	&Category_t1275____UnicodeArabicPresentationFormsB_134_FieldInfo,
	&Category_t1275____UnicodeSpecials_135_FieldInfo,
	&Category_t1275____UnicodeHalfwidthandFullwidthForms_136_FieldInfo,
	&Category_t1275____UnicodeOldItalic_137_FieldInfo,
	&Category_t1275____UnicodeGothic_138_FieldInfo,
	&Category_t1275____UnicodeDeseret_139_FieldInfo,
	&Category_t1275____UnicodeByzantineMusicalSymbols_140_FieldInfo,
	&Category_t1275____UnicodeMusicalSymbols_141_FieldInfo,
	&Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo,
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo,
	&Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo,
	&Category_t1275____UnicodeTags_145_FieldInfo,
	&Category_t1275____LastValue_146_FieldInfo,
	NULL
};
static const uint16_t Category_t1275____None_2_DefaultValueData = 0;
extern Il2CppType UInt16_t915_0_0_0;
static Il2CppFieldDefaultValueEntry Category_t1275____None_2_DefaultValue = 
{
	&Category_t1275____None_2_FieldInfo/* field */
	, { (char*)&Category_t1275____None_2_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____Any_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Category_t1275____Any_3_DefaultValue = 
{
	&Category_t1275____Any_3_FieldInfo/* field */
	, { (char*)&Category_t1275____Any_3_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____AnySingleline_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Category_t1275____AnySingleline_4_DefaultValue = 
{
	&Category_t1275____AnySingleline_4_FieldInfo/* field */
	, { (char*)&Category_t1275____AnySingleline_4_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____Word_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry Category_t1275____Word_5_DefaultValue = 
{
	&Category_t1275____Word_5_FieldInfo/* field */
	, { (char*)&Category_t1275____Word_5_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____Digit_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry Category_t1275____Digit_6_DefaultValue = 
{
	&Category_t1275____Digit_6_FieldInfo/* field */
	, { (char*)&Category_t1275____Digit_6_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____WhiteSpace_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry Category_t1275____WhiteSpace_7_DefaultValue = 
{
	&Category_t1275____WhiteSpace_7_FieldInfo/* field */
	, { (char*)&Category_t1275____WhiteSpace_7_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____EcmaAny_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry Category_t1275____EcmaAny_8_DefaultValue = 
{
	&Category_t1275____EcmaAny_8_FieldInfo/* field */
	, { (char*)&Category_t1275____EcmaAny_8_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____EcmaAnySingleline_9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry Category_t1275____EcmaAnySingleline_9_DefaultValue = 
{
	&Category_t1275____EcmaAnySingleline_9_FieldInfo/* field */
	, { (char*)&Category_t1275____EcmaAnySingleline_9_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____EcmaWord_10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry Category_t1275____EcmaWord_10_DefaultValue = 
{
	&Category_t1275____EcmaWord_10_FieldInfo/* field */
	, { (char*)&Category_t1275____EcmaWord_10_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____EcmaDigit_11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry Category_t1275____EcmaDigit_11_DefaultValue = 
{
	&Category_t1275____EcmaDigit_11_FieldInfo/* field */
	, { (char*)&Category_t1275____EcmaDigit_11_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____EcmaWhiteSpace_12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry Category_t1275____EcmaWhiteSpace_12_DefaultValue = 
{
	&Category_t1275____EcmaWhiteSpace_12_FieldInfo/* field */
	, { (char*)&Category_t1275____EcmaWhiteSpace_12_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeL_13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeL_13_DefaultValue = 
{
	&Category_t1275____UnicodeL_13_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeL_13_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeM_14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeM_14_DefaultValue = 
{
	&Category_t1275____UnicodeM_14_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeM_14_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeN_15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeN_15_DefaultValue = 
{
	&Category_t1275____UnicodeN_15_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeN_15_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeZ_16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeZ_16_DefaultValue = 
{
	&Category_t1275____UnicodeZ_16_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeZ_16_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeP_17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeP_17_DefaultValue = 
{
	&Category_t1275____UnicodeP_17_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeP_17_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeS_18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeS_18_DefaultValue = 
{
	&Category_t1275____UnicodeS_18_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeS_18_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeC_19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeC_19_DefaultValue = 
{
	&Category_t1275____UnicodeC_19_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeC_19_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLu_20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLu_20_DefaultValue = 
{
	&Category_t1275____UnicodeLu_20_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLu_20_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLl_21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLl_21_DefaultValue = 
{
	&Category_t1275____UnicodeLl_21_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLl_21_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLt_22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLt_22_DefaultValue = 
{
	&Category_t1275____UnicodeLt_22_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLt_22_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLm_23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLm_23_DefaultValue = 
{
	&Category_t1275____UnicodeLm_23_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLm_23_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLo_24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLo_24_DefaultValue = 
{
	&Category_t1275____UnicodeLo_24_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLo_24_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMn_25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMn_25_DefaultValue = 
{
	&Category_t1275____UnicodeMn_25_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMn_25_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMe_26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMe_26_DefaultValue = 
{
	&Category_t1275____UnicodeMe_26_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMe_26_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMc_27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMc_27_DefaultValue = 
{
	&Category_t1275____UnicodeMc_27_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMc_27_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeNd_28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeNd_28_DefaultValue = 
{
	&Category_t1275____UnicodeNd_28_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeNd_28_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeNl_29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeNl_29_DefaultValue = 
{
	&Category_t1275____UnicodeNl_29_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeNl_29_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeNo_30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeNo_30_DefaultValue = 
{
	&Category_t1275____UnicodeNo_30_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeNo_30_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeZs_31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeZs_31_DefaultValue = 
{
	&Category_t1275____UnicodeZs_31_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeZs_31_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeZl_32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeZl_32_DefaultValue = 
{
	&Category_t1275____UnicodeZl_32_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeZl_32_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeZp_33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeZp_33_DefaultValue = 
{
	&Category_t1275____UnicodeZp_33_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeZp_33_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePd_34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePd_34_DefaultValue = 
{
	&Category_t1275____UnicodePd_34_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePd_34_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePs_35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePs_35_DefaultValue = 
{
	&Category_t1275____UnicodePs_35_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePs_35_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePi_36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePi_36_DefaultValue = 
{
	&Category_t1275____UnicodePi_36_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePi_36_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePe_37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePe_37_DefaultValue = 
{
	&Category_t1275____UnicodePe_37_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePe_37_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePf_38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePf_38_DefaultValue = 
{
	&Category_t1275____UnicodePf_38_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePf_38_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePc_39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePc_39_DefaultValue = 
{
	&Category_t1275____UnicodePc_39_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePc_39_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePo_40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePo_40_DefaultValue = 
{
	&Category_t1275____UnicodePo_40_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePo_40_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSm_41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSm_41_DefaultValue = 
{
	&Category_t1275____UnicodeSm_41_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSm_41_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSc_42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSc_42_DefaultValue = 
{
	&Category_t1275____UnicodeSc_42_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSc_42_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSk_43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSk_43_DefaultValue = 
{
	&Category_t1275____UnicodeSk_43_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSk_43_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSo_44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSo_44_DefaultValue = 
{
	&Category_t1275____UnicodeSo_44_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSo_44_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCc_45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCc_45_DefaultValue = 
{
	&Category_t1275____UnicodeCc_45_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCc_45_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCf_46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCf_46_DefaultValue = 
{
	&Category_t1275____UnicodeCf_46_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCf_46_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCo_47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCo_47_DefaultValue = 
{
	&Category_t1275____UnicodeCo_47_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCo_47_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCs_48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCs_48_DefaultValue = 
{
	&Category_t1275____UnicodeCs_48_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCs_48_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCn_49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCn_49_DefaultValue = 
{
	&Category_t1275____UnicodeCn_49_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCn_49_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBasicLatin_50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBasicLatin_50_DefaultValue = 
{
	&Category_t1275____UnicodeBasicLatin_50_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBasicLatin_50_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLatin1Supplement_51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLatin1Supplement_51_DefaultValue = 
{
	&Category_t1275____UnicodeLatin1Supplement_51_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLatin1Supplement_51_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLatinExtendedA_52_DefaultValueData = 50;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLatinExtendedA_52_DefaultValue = 
{
	&Category_t1275____UnicodeLatinExtendedA_52_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLatinExtendedA_52_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLatinExtendedB_53_DefaultValueData = 51;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLatinExtendedB_53_DefaultValue = 
{
	&Category_t1275____UnicodeLatinExtendedB_53_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLatinExtendedB_53_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeIPAExtensions_54_DefaultValueData = 52;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeIPAExtensions_54_DefaultValue = 
{
	&Category_t1275____UnicodeIPAExtensions_54_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeIPAExtensions_54_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSpacingModifierLetters_55_DefaultValueData = 53;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSpacingModifierLetters_55_DefaultValue = 
{
	&Category_t1275____UnicodeSpacingModifierLetters_55_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSpacingModifierLetters_55_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCombiningDiacriticalMarks_56_DefaultValueData = 54;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCombiningDiacriticalMarks_56_DefaultValue = 
{
	&Category_t1275____UnicodeCombiningDiacriticalMarks_56_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCombiningDiacriticalMarks_56_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGreek_57_DefaultValueData = 55;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGreek_57_DefaultValue = 
{
	&Category_t1275____UnicodeGreek_57_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGreek_57_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCyrillic_58_DefaultValueData = 56;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCyrillic_58_DefaultValue = 
{
	&Category_t1275____UnicodeCyrillic_58_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCyrillic_58_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeArmenian_59_DefaultValueData = 57;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeArmenian_59_DefaultValue = 
{
	&Category_t1275____UnicodeArmenian_59_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeArmenian_59_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHebrew_60_DefaultValueData = 58;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHebrew_60_DefaultValue = 
{
	&Category_t1275____UnicodeHebrew_60_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHebrew_60_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeArabic_61_DefaultValueData = 59;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeArabic_61_DefaultValue = 
{
	&Category_t1275____UnicodeArabic_61_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeArabic_61_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSyriac_62_DefaultValueData = 60;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSyriac_62_DefaultValue = 
{
	&Category_t1275____UnicodeSyriac_62_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSyriac_62_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeThaana_63_DefaultValueData = 61;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeThaana_63_DefaultValue = 
{
	&Category_t1275____UnicodeThaana_63_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeThaana_63_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeDevanagari_64_DefaultValueData = 62;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeDevanagari_64_DefaultValue = 
{
	&Category_t1275____UnicodeDevanagari_64_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeDevanagari_64_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBengali_65_DefaultValueData = 63;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBengali_65_DefaultValue = 
{
	&Category_t1275____UnicodeBengali_65_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBengali_65_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGurmukhi_66_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGurmukhi_66_DefaultValue = 
{
	&Category_t1275____UnicodeGurmukhi_66_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGurmukhi_66_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGujarati_67_DefaultValueData = 65;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGujarati_67_DefaultValue = 
{
	&Category_t1275____UnicodeGujarati_67_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGujarati_67_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeOriya_68_DefaultValueData = 66;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeOriya_68_DefaultValue = 
{
	&Category_t1275____UnicodeOriya_68_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeOriya_68_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeTamil_69_DefaultValueData = 67;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeTamil_69_DefaultValue = 
{
	&Category_t1275____UnicodeTamil_69_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeTamil_69_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeTelugu_70_DefaultValueData = 68;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeTelugu_70_DefaultValue = 
{
	&Category_t1275____UnicodeTelugu_70_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeTelugu_70_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeKannada_71_DefaultValueData = 69;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeKannada_71_DefaultValue = 
{
	&Category_t1275____UnicodeKannada_71_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeKannada_71_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMalayalam_72_DefaultValueData = 70;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMalayalam_72_DefaultValue = 
{
	&Category_t1275____UnicodeMalayalam_72_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMalayalam_72_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSinhala_73_DefaultValueData = 71;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSinhala_73_DefaultValue = 
{
	&Category_t1275____UnicodeSinhala_73_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSinhala_73_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeThai_74_DefaultValueData = 72;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeThai_74_DefaultValue = 
{
	&Category_t1275____UnicodeThai_74_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeThai_74_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLao_75_DefaultValueData = 73;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLao_75_DefaultValue = 
{
	&Category_t1275____UnicodeLao_75_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLao_75_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeTibetan_76_DefaultValueData = 74;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeTibetan_76_DefaultValue = 
{
	&Category_t1275____UnicodeTibetan_76_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeTibetan_76_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMyanmar_77_DefaultValueData = 75;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMyanmar_77_DefaultValue = 
{
	&Category_t1275____UnicodeMyanmar_77_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMyanmar_77_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGeorgian_78_DefaultValueData = 76;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGeorgian_78_DefaultValue = 
{
	&Category_t1275____UnicodeGeorgian_78_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGeorgian_78_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHangulJamo_79_DefaultValueData = 77;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHangulJamo_79_DefaultValue = 
{
	&Category_t1275____UnicodeHangulJamo_79_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHangulJamo_79_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeEthiopic_80_DefaultValueData = 78;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeEthiopic_80_DefaultValue = 
{
	&Category_t1275____UnicodeEthiopic_80_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeEthiopic_80_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCherokee_81_DefaultValueData = 79;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCherokee_81_DefaultValue = 
{
	&Category_t1275____UnicodeCherokee_81_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCherokee_81_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue = 
{
	&Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeOgham_83_DefaultValueData = 81;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeOgham_83_DefaultValue = 
{
	&Category_t1275____UnicodeOgham_83_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeOgham_83_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeRunic_84_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeRunic_84_DefaultValue = 
{
	&Category_t1275____UnicodeRunic_84_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeRunic_84_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeKhmer_85_DefaultValueData = 83;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeKhmer_85_DefaultValue = 
{
	&Category_t1275____UnicodeKhmer_85_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeKhmer_85_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMongolian_86_DefaultValueData = 84;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMongolian_86_DefaultValue = 
{
	&Category_t1275____UnicodeMongolian_86_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMongolian_86_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLatinExtendedAdditional_87_DefaultValueData = 85;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLatinExtendedAdditional_87_DefaultValue = 
{
	&Category_t1275____UnicodeLatinExtendedAdditional_87_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLatinExtendedAdditional_87_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGreekExtended_88_DefaultValueData = 86;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGreekExtended_88_DefaultValue = 
{
	&Category_t1275____UnicodeGreekExtended_88_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGreekExtended_88_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGeneralPunctuation_89_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGeneralPunctuation_89_DefaultValue = 
{
	&Category_t1275____UnicodeGeneralPunctuation_89_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGeneralPunctuation_89_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSuperscriptsandSubscripts_90_DefaultValueData = 88;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSuperscriptsandSubscripts_90_DefaultValue = 
{
	&Category_t1275____UnicodeSuperscriptsandSubscripts_90_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSuperscriptsandSubscripts_90_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCurrencySymbols_91_DefaultValueData = 89;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCurrencySymbols_91_DefaultValue = 
{
	&Category_t1275____UnicodeCurrencySymbols_91_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCurrencySymbols_91_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCombiningMarksforSymbols_92_DefaultValueData = 90;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCombiningMarksforSymbols_92_DefaultValue = 
{
	&Category_t1275____UnicodeCombiningMarksforSymbols_92_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCombiningMarksforSymbols_92_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLetterlikeSymbols_93_DefaultValueData = 91;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLetterlikeSymbols_93_DefaultValue = 
{
	&Category_t1275____UnicodeLetterlikeSymbols_93_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLetterlikeSymbols_93_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeNumberForms_94_DefaultValueData = 92;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeNumberForms_94_DefaultValue = 
{
	&Category_t1275____UnicodeNumberForms_94_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeNumberForms_94_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeArrows_95_DefaultValueData = 93;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeArrows_95_DefaultValue = 
{
	&Category_t1275____UnicodeArrows_95_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeArrows_95_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMathematicalOperators_96_DefaultValueData = 94;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMathematicalOperators_96_DefaultValue = 
{
	&Category_t1275____UnicodeMathematicalOperators_96_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMathematicalOperators_96_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMiscellaneousTechnical_97_DefaultValueData = 95;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMiscellaneousTechnical_97_DefaultValue = 
{
	&Category_t1275____UnicodeMiscellaneousTechnical_97_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMiscellaneousTechnical_97_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeControlPictures_98_DefaultValueData = 96;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeControlPictures_98_DefaultValue = 
{
	&Category_t1275____UnicodeControlPictures_98_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeControlPictures_98_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeOpticalCharacterRecognition_99_DefaultValueData = 97;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeOpticalCharacterRecognition_99_DefaultValue = 
{
	&Category_t1275____UnicodeOpticalCharacterRecognition_99_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeOpticalCharacterRecognition_99_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeEnclosedAlphanumerics_100_DefaultValueData = 98;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeEnclosedAlphanumerics_100_DefaultValue = 
{
	&Category_t1275____UnicodeEnclosedAlphanumerics_100_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeEnclosedAlphanumerics_100_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBoxDrawing_101_DefaultValueData = 99;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBoxDrawing_101_DefaultValue = 
{
	&Category_t1275____UnicodeBoxDrawing_101_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBoxDrawing_101_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBlockElements_102_DefaultValueData = 100;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBlockElements_102_DefaultValue = 
{
	&Category_t1275____UnicodeBlockElements_102_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBlockElements_102_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGeometricShapes_103_DefaultValueData = 101;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGeometricShapes_103_DefaultValue = 
{
	&Category_t1275____UnicodeGeometricShapes_103_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGeometricShapes_103_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMiscellaneousSymbols_104_DefaultValueData = 102;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMiscellaneousSymbols_104_DefaultValue = 
{
	&Category_t1275____UnicodeMiscellaneousSymbols_104_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMiscellaneousSymbols_104_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeDingbats_105_DefaultValueData = 103;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeDingbats_105_DefaultValue = 
{
	&Category_t1275____UnicodeDingbats_105_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeDingbats_105_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBraillePatterns_106_DefaultValueData = 104;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBraillePatterns_106_DefaultValue = 
{
	&Category_t1275____UnicodeBraillePatterns_106_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBraillePatterns_106_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKRadicalsSupplement_107_DefaultValueData = 105;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKRadicalsSupplement_107_DefaultValue = 
{
	&Category_t1275____UnicodeCJKRadicalsSupplement_107_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKRadicalsSupplement_107_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeKangxiRadicals_108_DefaultValueData = 106;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeKangxiRadicals_108_DefaultValue = 
{
	&Category_t1275____UnicodeKangxiRadicals_108_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeKangxiRadicals_108_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData = 107;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeIdeographicDescriptionCharacters_109_DefaultValue = 
{
	&Category_t1275____UnicodeIdeographicDescriptionCharacters_109_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData = 108;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKSymbolsandPunctuation_110_DefaultValue = 
{
	&Category_t1275____UnicodeCJKSymbolsandPunctuation_110_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHiragana_111_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHiragana_111_DefaultValue = 
{
	&Category_t1275____UnicodeHiragana_111_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHiragana_111_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeKatakana_112_DefaultValueData = 110;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeKatakana_112_DefaultValue = 
{
	&Category_t1275____UnicodeKatakana_112_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeKatakana_112_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBopomofo_113_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBopomofo_113_DefaultValue = 
{
	&Category_t1275____UnicodeBopomofo_113_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBopomofo_113_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHangulCompatibilityJamo_114_DefaultValueData = 112;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHangulCompatibilityJamo_114_DefaultValue = 
{
	&Category_t1275____UnicodeHangulCompatibilityJamo_114_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHangulCompatibilityJamo_114_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeKanbun_115_DefaultValueData = 113;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeKanbun_115_DefaultValue = 
{
	&Category_t1275____UnicodeKanbun_115_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeKanbun_115_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeBopomofoExtended_116_DefaultValueData = 114;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeBopomofoExtended_116_DefaultValue = 
{
	&Category_t1275____UnicodeBopomofoExtended_116_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeBopomofoExtended_116_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData = 115;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue = 
{
	&Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKCompatibility_118_DefaultValueData = 116;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKCompatibility_118_DefaultValue = 
{
	&Category_t1275____UnicodeCJKCompatibility_118_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKCompatibility_118_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData = 117;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue = 
{
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKUnifiedIdeographs_120_DefaultValueData = 118;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKUnifiedIdeographs_120_DefaultValue = 
{
	&Category_t1275____UnicodeCJKUnifiedIdeographs_120_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKUnifiedIdeographs_120_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeYiSyllables_121_DefaultValueData = 119;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeYiSyllables_121_DefaultValue = 
{
	&Category_t1275____UnicodeYiSyllables_121_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeYiSyllables_121_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeYiRadicals_122_DefaultValueData = 120;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeYiRadicals_122_DefaultValue = 
{
	&Category_t1275____UnicodeYiRadicals_122_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeYiRadicals_122_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHangulSyllables_123_DefaultValueData = 121;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHangulSyllables_123_DefaultValue = 
{
	&Category_t1275____UnicodeHangulSyllables_123_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHangulSyllables_123_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHighSurrogates_124_DefaultValueData = 122;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHighSurrogates_124_DefaultValue = 
{
	&Category_t1275____UnicodeHighSurrogates_124_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHighSurrogates_124_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHighPrivateUseSurrogates_125_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHighPrivateUseSurrogates_125_DefaultValue = 
{
	&Category_t1275____UnicodeHighPrivateUseSurrogates_125_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHighPrivateUseSurrogates_125_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeLowSurrogates_126_DefaultValueData = 124;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeLowSurrogates_126_DefaultValue = 
{
	&Category_t1275____UnicodeLowSurrogates_126_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeLowSurrogates_126_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodePrivateUse_127_DefaultValueData = 125;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodePrivateUse_127_DefaultValue = 
{
	&Category_t1275____UnicodePrivateUse_127_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodePrivateUse_127_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData = 126;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKCompatibilityIdeographs_128_DefaultValue = 
{
	&Category_t1275____UnicodeCJKCompatibilityIdeographs_128_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeAlphabeticPresentationForms_129_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeAlphabeticPresentationForms_129_DefaultValue = 
{
	&Category_t1275____UnicodeAlphabeticPresentationForms_129_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeAlphabeticPresentationForms_129_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeArabicPresentationFormsA_130_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeArabicPresentationFormsA_130_DefaultValue = 
{
	&Category_t1275____UnicodeArabicPresentationFormsA_130_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeArabicPresentationFormsA_130_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCombiningHalfMarks_131_DefaultValueData = 129;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCombiningHalfMarks_131_DefaultValue = 
{
	&Category_t1275____UnicodeCombiningHalfMarks_131_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCombiningHalfMarks_131_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKCompatibilityForms_132_DefaultValueData = 130;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKCompatibilityForms_132_DefaultValue = 
{
	&Category_t1275____UnicodeCJKCompatibilityForms_132_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKCompatibilityForms_132_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSmallFormVariants_133_DefaultValueData = 131;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSmallFormVariants_133_DefaultValue = 
{
	&Category_t1275____UnicodeSmallFormVariants_133_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSmallFormVariants_133_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeArabicPresentationFormsB_134_DefaultValueData = 132;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeArabicPresentationFormsB_134_DefaultValue = 
{
	&Category_t1275____UnicodeArabicPresentationFormsB_134_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeArabicPresentationFormsB_134_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeSpecials_135_DefaultValueData = 133;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeSpecials_135_DefaultValue = 
{
	&Category_t1275____UnicodeSpecials_135_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeSpecials_135_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData = 134;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeHalfwidthandFullwidthForms_136_DefaultValue = 
{
	&Category_t1275____UnicodeHalfwidthandFullwidthForms_136_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeOldItalic_137_DefaultValueData = 135;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeOldItalic_137_DefaultValue = 
{
	&Category_t1275____UnicodeOldItalic_137_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeOldItalic_137_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeGothic_138_DefaultValueData = 136;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeGothic_138_DefaultValue = 
{
	&Category_t1275____UnicodeGothic_138_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeGothic_138_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeDeseret_139_DefaultValueData = 137;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeDeseret_139_DefaultValue = 
{
	&Category_t1275____UnicodeDeseret_139_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeDeseret_139_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeByzantineMusicalSymbols_140_DefaultValueData = 138;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeByzantineMusicalSymbols_140_DefaultValue = 
{
	&Category_t1275____UnicodeByzantineMusicalSymbols_140_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeByzantineMusicalSymbols_140_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMusicalSymbols_141_DefaultValueData = 139;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMusicalSymbols_141_DefaultValue = 
{
	&Category_t1275____UnicodeMusicalSymbols_141_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMusicalSymbols_141_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData = 140;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue = 
{
	&Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData = 141;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue = 
{
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData = 142;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue = 
{
	&Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____UnicodeTags_145_DefaultValueData = 143;
static Il2CppFieldDefaultValueEntry Category_t1275____UnicodeTags_145_DefaultValue = 
{
	&Category_t1275____UnicodeTags_145_FieldInfo/* field */
	, { (char*)&Category_t1275____UnicodeTags_145_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static const uint16_t Category_t1275____LastValue_146_DefaultValueData = 144;
static Il2CppFieldDefaultValueEntry Category_t1275____LastValue_146_DefaultValue = 
{
	&Category_t1275____LastValue_146_FieldInfo/* field */
	, { (char*)&Category_t1275____LastValue_146_DefaultValueData, &UInt16_t915_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Category_t1275_FieldDefaultValues[] = 
{
	&Category_t1275____None_2_DefaultValue,
	&Category_t1275____Any_3_DefaultValue,
	&Category_t1275____AnySingleline_4_DefaultValue,
	&Category_t1275____Word_5_DefaultValue,
	&Category_t1275____Digit_6_DefaultValue,
	&Category_t1275____WhiteSpace_7_DefaultValue,
	&Category_t1275____EcmaAny_8_DefaultValue,
	&Category_t1275____EcmaAnySingleline_9_DefaultValue,
	&Category_t1275____EcmaWord_10_DefaultValue,
	&Category_t1275____EcmaDigit_11_DefaultValue,
	&Category_t1275____EcmaWhiteSpace_12_DefaultValue,
	&Category_t1275____UnicodeL_13_DefaultValue,
	&Category_t1275____UnicodeM_14_DefaultValue,
	&Category_t1275____UnicodeN_15_DefaultValue,
	&Category_t1275____UnicodeZ_16_DefaultValue,
	&Category_t1275____UnicodeP_17_DefaultValue,
	&Category_t1275____UnicodeS_18_DefaultValue,
	&Category_t1275____UnicodeC_19_DefaultValue,
	&Category_t1275____UnicodeLu_20_DefaultValue,
	&Category_t1275____UnicodeLl_21_DefaultValue,
	&Category_t1275____UnicodeLt_22_DefaultValue,
	&Category_t1275____UnicodeLm_23_DefaultValue,
	&Category_t1275____UnicodeLo_24_DefaultValue,
	&Category_t1275____UnicodeMn_25_DefaultValue,
	&Category_t1275____UnicodeMe_26_DefaultValue,
	&Category_t1275____UnicodeMc_27_DefaultValue,
	&Category_t1275____UnicodeNd_28_DefaultValue,
	&Category_t1275____UnicodeNl_29_DefaultValue,
	&Category_t1275____UnicodeNo_30_DefaultValue,
	&Category_t1275____UnicodeZs_31_DefaultValue,
	&Category_t1275____UnicodeZl_32_DefaultValue,
	&Category_t1275____UnicodeZp_33_DefaultValue,
	&Category_t1275____UnicodePd_34_DefaultValue,
	&Category_t1275____UnicodePs_35_DefaultValue,
	&Category_t1275____UnicodePi_36_DefaultValue,
	&Category_t1275____UnicodePe_37_DefaultValue,
	&Category_t1275____UnicodePf_38_DefaultValue,
	&Category_t1275____UnicodePc_39_DefaultValue,
	&Category_t1275____UnicodePo_40_DefaultValue,
	&Category_t1275____UnicodeSm_41_DefaultValue,
	&Category_t1275____UnicodeSc_42_DefaultValue,
	&Category_t1275____UnicodeSk_43_DefaultValue,
	&Category_t1275____UnicodeSo_44_DefaultValue,
	&Category_t1275____UnicodeCc_45_DefaultValue,
	&Category_t1275____UnicodeCf_46_DefaultValue,
	&Category_t1275____UnicodeCo_47_DefaultValue,
	&Category_t1275____UnicodeCs_48_DefaultValue,
	&Category_t1275____UnicodeCn_49_DefaultValue,
	&Category_t1275____UnicodeBasicLatin_50_DefaultValue,
	&Category_t1275____UnicodeLatin1Supplement_51_DefaultValue,
	&Category_t1275____UnicodeLatinExtendedA_52_DefaultValue,
	&Category_t1275____UnicodeLatinExtendedB_53_DefaultValue,
	&Category_t1275____UnicodeIPAExtensions_54_DefaultValue,
	&Category_t1275____UnicodeSpacingModifierLetters_55_DefaultValue,
	&Category_t1275____UnicodeCombiningDiacriticalMarks_56_DefaultValue,
	&Category_t1275____UnicodeGreek_57_DefaultValue,
	&Category_t1275____UnicodeCyrillic_58_DefaultValue,
	&Category_t1275____UnicodeArmenian_59_DefaultValue,
	&Category_t1275____UnicodeHebrew_60_DefaultValue,
	&Category_t1275____UnicodeArabic_61_DefaultValue,
	&Category_t1275____UnicodeSyriac_62_DefaultValue,
	&Category_t1275____UnicodeThaana_63_DefaultValue,
	&Category_t1275____UnicodeDevanagari_64_DefaultValue,
	&Category_t1275____UnicodeBengali_65_DefaultValue,
	&Category_t1275____UnicodeGurmukhi_66_DefaultValue,
	&Category_t1275____UnicodeGujarati_67_DefaultValue,
	&Category_t1275____UnicodeOriya_68_DefaultValue,
	&Category_t1275____UnicodeTamil_69_DefaultValue,
	&Category_t1275____UnicodeTelugu_70_DefaultValue,
	&Category_t1275____UnicodeKannada_71_DefaultValue,
	&Category_t1275____UnicodeMalayalam_72_DefaultValue,
	&Category_t1275____UnicodeSinhala_73_DefaultValue,
	&Category_t1275____UnicodeThai_74_DefaultValue,
	&Category_t1275____UnicodeLao_75_DefaultValue,
	&Category_t1275____UnicodeTibetan_76_DefaultValue,
	&Category_t1275____UnicodeMyanmar_77_DefaultValue,
	&Category_t1275____UnicodeGeorgian_78_DefaultValue,
	&Category_t1275____UnicodeHangulJamo_79_DefaultValue,
	&Category_t1275____UnicodeEthiopic_80_DefaultValue,
	&Category_t1275____UnicodeCherokee_81_DefaultValue,
	&Category_t1275____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue,
	&Category_t1275____UnicodeOgham_83_DefaultValue,
	&Category_t1275____UnicodeRunic_84_DefaultValue,
	&Category_t1275____UnicodeKhmer_85_DefaultValue,
	&Category_t1275____UnicodeMongolian_86_DefaultValue,
	&Category_t1275____UnicodeLatinExtendedAdditional_87_DefaultValue,
	&Category_t1275____UnicodeGreekExtended_88_DefaultValue,
	&Category_t1275____UnicodeGeneralPunctuation_89_DefaultValue,
	&Category_t1275____UnicodeSuperscriptsandSubscripts_90_DefaultValue,
	&Category_t1275____UnicodeCurrencySymbols_91_DefaultValue,
	&Category_t1275____UnicodeCombiningMarksforSymbols_92_DefaultValue,
	&Category_t1275____UnicodeLetterlikeSymbols_93_DefaultValue,
	&Category_t1275____UnicodeNumberForms_94_DefaultValue,
	&Category_t1275____UnicodeArrows_95_DefaultValue,
	&Category_t1275____UnicodeMathematicalOperators_96_DefaultValue,
	&Category_t1275____UnicodeMiscellaneousTechnical_97_DefaultValue,
	&Category_t1275____UnicodeControlPictures_98_DefaultValue,
	&Category_t1275____UnicodeOpticalCharacterRecognition_99_DefaultValue,
	&Category_t1275____UnicodeEnclosedAlphanumerics_100_DefaultValue,
	&Category_t1275____UnicodeBoxDrawing_101_DefaultValue,
	&Category_t1275____UnicodeBlockElements_102_DefaultValue,
	&Category_t1275____UnicodeGeometricShapes_103_DefaultValue,
	&Category_t1275____UnicodeMiscellaneousSymbols_104_DefaultValue,
	&Category_t1275____UnicodeDingbats_105_DefaultValue,
	&Category_t1275____UnicodeBraillePatterns_106_DefaultValue,
	&Category_t1275____UnicodeCJKRadicalsSupplement_107_DefaultValue,
	&Category_t1275____UnicodeKangxiRadicals_108_DefaultValue,
	&Category_t1275____UnicodeIdeographicDescriptionCharacters_109_DefaultValue,
	&Category_t1275____UnicodeCJKSymbolsandPunctuation_110_DefaultValue,
	&Category_t1275____UnicodeHiragana_111_DefaultValue,
	&Category_t1275____UnicodeKatakana_112_DefaultValue,
	&Category_t1275____UnicodeBopomofo_113_DefaultValue,
	&Category_t1275____UnicodeHangulCompatibilityJamo_114_DefaultValue,
	&Category_t1275____UnicodeKanbun_115_DefaultValue,
	&Category_t1275____UnicodeBopomofoExtended_116_DefaultValue,
	&Category_t1275____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue,
	&Category_t1275____UnicodeCJKCompatibility_118_DefaultValue,
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue,
	&Category_t1275____UnicodeCJKUnifiedIdeographs_120_DefaultValue,
	&Category_t1275____UnicodeYiSyllables_121_DefaultValue,
	&Category_t1275____UnicodeYiRadicals_122_DefaultValue,
	&Category_t1275____UnicodeHangulSyllables_123_DefaultValue,
	&Category_t1275____UnicodeHighSurrogates_124_DefaultValue,
	&Category_t1275____UnicodeHighPrivateUseSurrogates_125_DefaultValue,
	&Category_t1275____UnicodeLowSurrogates_126_DefaultValue,
	&Category_t1275____UnicodePrivateUse_127_DefaultValue,
	&Category_t1275____UnicodeCJKCompatibilityIdeographs_128_DefaultValue,
	&Category_t1275____UnicodeAlphabeticPresentationForms_129_DefaultValue,
	&Category_t1275____UnicodeArabicPresentationFormsA_130_DefaultValue,
	&Category_t1275____UnicodeCombiningHalfMarks_131_DefaultValue,
	&Category_t1275____UnicodeCJKCompatibilityForms_132_DefaultValue,
	&Category_t1275____UnicodeSmallFormVariants_133_DefaultValue,
	&Category_t1275____UnicodeArabicPresentationFormsB_134_DefaultValue,
	&Category_t1275____UnicodeSpecials_135_DefaultValue,
	&Category_t1275____UnicodeHalfwidthandFullwidthForms_136_DefaultValue,
	&Category_t1275____UnicodeOldItalic_137_DefaultValue,
	&Category_t1275____UnicodeGothic_138_DefaultValue,
	&Category_t1275____UnicodeDeseret_139_DefaultValue,
	&Category_t1275____UnicodeByzantineMusicalSymbols_140_DefaultValue,
	&Category_t1275____UnicodeMusicalSymbols_141_DefaultValue,
	&Category_t1275____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue,
	&Category_t1275____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue,
	&Category_t1275____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue,
	&Category_t1275____UnicodeTags_145_DefaultValue,
	&Category_t1275____LastValue_146_DefaultValue,
	NULL
};
extern MethodInfo Enum_Equals_m1067_MethodInfo;
extern MethodInfo Enum_GetHashCode_m1069_MethodInfo;
extern MethodInfo Enum_ToString_m1070_MethodInfo;
extern MethodInfo Enum_ToString_m1071_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m1072_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m1073_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m1074_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m1075_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m1076_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m1077_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m1078_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m1079_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m1080_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m1081_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m1082_MethodInfo;
extern MethodInfo Enum_ToString_m1083_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m1084_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m1085_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m1086_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m1087_MethodInfo;
extern MethodInfo Enum_CompareTo_m1088_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m1089_MethodInfo;
static Il2CppMethodReference Category_t1275_VTable[] =
{
	&Enum_Equals_m1067_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Enum_GetHashCode_m1069_MethodInfo,
	&Enum_ToString_m1070_MethodInfo,
	&Enum_ToString_m1071_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1072_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1073_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1074_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1075_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1076_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1077_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1078_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1079_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1080_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1081_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1082_MethodInfo,
	&Enum_ToString_m1083_MethodInfo,
	&Enum_System_IConvertible_ToType_m1084_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1085_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1086_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1087_MethodInfo,
	&Enum_CompareTo_m1088_MethodInfo,
	&Enum_GetTypeCode_m1089_MethodInfo,
};
static bool Category_t1275_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IFormattable_t224_0_0_0;
extern Il2CppType IConvertible_t225_0_0_0;
extern Il2CppType IComparable_t226_0_0_0;
static Il2CppInterfaceOffsetPair Category_t1275_InterfacesOffsets[] = 
{
	{ &IFormattable_t224_0_0_0, 4},
	{ &IConvertible_t225_0_0_0, 5},
	{ &IComparable_t226_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Category_t1275_1_0_0;
extern Il2CppType Enum_t227_0_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t915_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Category_t1275_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Category_t1275_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t227_0_0_0/* parent */
	, Category_t1275_VTable/* vtableMethods */
	, Category_t1275_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Category_t1275_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Category"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Category_t1275_MethodInfos/* methods */
	, NULL/* properties */
	, Category_t1275_FieldInfos/* fields */
	, NULL/* events */
	, &UInt16_t915_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Category_t1275_0_0_0/* byval_arg */
	, &Category_t1275_1_0_0/* this_arg */
	, &Category_t1275_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Category_t1275_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Category_t1275)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Category_t1275)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 146/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtils.h"
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern TypeInfo CategoryUtils_t1276_il2cpp_TypeInfo;
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo CategoryUtils_t1276_CategoryUtils_CategoryFromName_m5598_ParameterInfos[] = 
{
	{"name", 0, 134218221, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Category_t1275_0_0_0;
extern void* RuntimeInvoker_Category_t1275_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
MethodInfo CategoryUtils_CategoryFromName_m5598_MethodInfo = 
{
	"CategoryFromName"/* name */
	, (methodPointerType)&CategoryUtils_CategoryFromName_m5598/* method */
	, &CategoryUtils_t1276_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1275_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1275_Object_t/* invoker_method */
	, CategoryUtils_t1276_CategoryUtils_CategoryFromName_m5598_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo CategoryUtils_t1276_CategoryUtils_IsCategory_m5599_ParameterInfos[] = 
{
	{"cat", 0, 134218222, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"c", 1, 134218223, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_UInt16_t915_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
MethodInfo CategoryUtils_IsCategory_m5599_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m5599/* method */
	, &CategoryUtils_t1276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_UInt16_t915_Int16_t596/* invoker_method */
	, CategoryUtils_t1276_CategoryUtils_IsCategory_m5599_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnicodeCategory_t1374_0_0_0;
extern Il2CppType UnicodeCategory_t1374_0_0_0;
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo CategoryUtils_t1276_CategoryUtils_IsCategory_m5600_ParameterInfos[] = 
{
	{"uc", 0, 134218224, &EmptyCustomAttributesCache, &UnicodeCategory_t1374_0_0_0},
	{"c", 1, 134218225, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
MethodInfo CategoryUtils_IsCategory_m5600_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m5600/* method */
	, &CategoryUtils_t1276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188_Int16_t596/* invoker_method */
	, CategoryUtils_t1276_CategoryUtils_IsCategory_m5600_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CategoryUtils_t1276_MethodInfos[] =
{
	&CategoryUtils_CategoryFromName_m5598_MethodInfo,
	&CategoryUtils_IsCategory_m5599_MethodInfo,
	&CategoryUtils_IsCategory_m5600_MethodInfo,
	NULL
};
static Il2CppMethodReference CategoryUtils_t1276_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool CategoryUtils_t1276_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CategoryUtils_t1276_0_0_0;
extern Il2CppType CategoryUtils_t1276_1_0_0;
struct CategoryUtils_t1276;
const Il2CppTypeDefinitionMetadata CategoryUtils_t1276_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CategoryUtils_t1276_VTable/* vtableMethods */
	, CategoryUtils_t1276_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CategoryUtils_t1276_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CategoryUtils"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, CategoryUtils_t1276_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CategoryUtils_t1276_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CategoryUtils_t1276_0_0_0/* byval_arg */
	, &CategoryUtils_t1276_1_0_0/* this_arg */
	, &CategoryUtils_t1276_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CategoryUtils_t1276)/* instance_size */
	, sizeof (CategoryUtils_t1276)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern TypeInfo LinkRef_t1277_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkRef::.ctor()
MethodInfo LinkRef__ctor_m5601_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkRef__ctor_m5601/* method */
	, &LinkRef_t1277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkRef_t1277_MethodInfos[] =
{
	&LinkRef__ctor_m5601_MethodInfo,
	NULL
};
static Il2CppMethodReference LinkRef_t1277_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool LinkRef_t1277_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkRef_t1277_0_0_0;
extern Il2CppType LinkRef_t1277_1_0_0;
struct LinkRef_t1277;
const Il2CppTypeDefinitionMetadata LinkRef_t1277_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LinkRef_t1277_VTable/* vtableMethods */
	, LinkRef_t1277_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkRef_t1277_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkRef"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkRef_t1277_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &LinkRef_t1277_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkRef_t1277_0_0_0/* byval_arg */
	, &LinkRef_t1277_1_0_0/* this_arg */
	, &LinkRef_t1277_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkRef_t1277)/* instance_size */
	, sizeof (LinkRef_t1277)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.ICompiler
extern TypeInfo ICompiler_t1303_il2cpp_TypeInfo;
extern Il2CppType IMachineFactory_t1265_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.ICompiler::GetMachineFactory()
MethodInfo ICompiler_GetMachineFactory_m6170_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1265_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFalse()
MethodInfo ICompiler_EmitFalse_m6225_MethodInfo = 
{
	"EmitFalse"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTrue()
MethodInfo ICompiler_EmitTrue_m6212_MethodInfo = 
{
	"EmitTrue"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitCharacter_m6229_ParameterInfos[] = 
{
	{"c", 0, 134218226, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"negate", 1, 134218227, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 2, 134218228, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 3, 134218229, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCharacter_m6229_MethodInfo = 
{
	"EmitCharacter"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitCharacter_m6229_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitCategory_m6236_ParameterInfos[] = 
{
	{"cat", 0, 134218230, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218231, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218232, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCategory_m6236_MethodInfo = 
{
	"EmitCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitCategory_m6236_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitNotCategory_m6237_ParameterInfos[] = 
{
	{"cat", 0, 134218233, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218234, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218235, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitNotCategory_m6237_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitNotCategory_m6237_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitRange_m6235_ParameterInfos[] = 
{
	{"lo", 0, 134218236, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"hi", 1, 134218237, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"negate", 2, 134218238, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 3, 134218239, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 4, 134218240, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_Int16_t596_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitRange_m6235_MethodInfo = 
{
	"EmitRange"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_Int16_t596_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitRange_m6235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType BitArray_t1283_0_0_0;
extern Il2CppType BitArray_t1283_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitSet_m6234_ParameterInfos[] = 
{
	{"lo", 0, 134218241, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"set", 1, 134218242, &EmptyCustomAttributesCache, &BitArray_t1283_0_0_0},
	{"negate", 2, 134218243, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 3, 134218244, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 4, 134218245, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_Object_t_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitSet_m6234_MethodInfo = 
{
	"EmitSet"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_Object_t_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitSet_m6234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitString_m6211_ParameterInfos[] = 
{
	{"str", 0, 134218246, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218247, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218248, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitString_m6211_MethodInfo = 
{
	"EmitString"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitString_m6211_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1271_0_0_0;
extern Il2CppType Position_t1271_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitPosition_m6210_ParameterInfos[] = 
{
	{"pos", 0, 134218249, &EmptyCustomAttributesCache, &Position_t1271_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo ICompiler_EmitPosition_m6210_MethodInfo = 
{
	"EmitPosition"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitPosition_m6210_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitOpen_m6214_ParameterInfos[] = 
{
	{"gid", 0, 134218250, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32)
MethodInfo ICompiler_EmitOpen_m6214_MethodInfo = 
{
	"EmitOpen"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitOpen_m6214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitClose_m6215_ParameterInfos[] = 
{
	{"gid", 0, 134218251, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32)
MethodInfo ICompiler_EmitClose_m6215_MethodInfo = 
{
	"EmitClose"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitClose_m6215_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitBalanceStart_m6216_ParameterInfos[] = 
{
	{"gid", 0, 134218252, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"balance", 1, 134218253, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"capture", 2, 134218254, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"tail", 3, 134218255, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBalanceStart_m6216_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitBalanceStart_m6216_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalance()
MethodInfo ICompiler_EmitBalance_m6217_MethodInfo = 
{
	"EmitBalance"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitReference_m6230_ParameterInfos[] = 
{
	{"gid", 0, 134218256, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"ignore", 1, 134218257, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218258, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitReference_m6230_MethodInfo = 
{
	"EmitReference"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_SByte_t232_SByte_t232/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitReference_m6230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitIfDefined_m6222_ParameterInfos[] = 
{
	{"gid", 0, 134218259, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"tail", 1, 134218260, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIfDefined_m6222_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitIfDefined_m6222_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitSub_m6218_ParameterInfos[] = 
{
	{"tail", 0, 134218261, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitSub_m6218_MethodInfo = 
{
	"EmitSub"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitSub_m6218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitTest_m6224_ParameterInfos[] = 
{
	{"yes", 0, 134218262, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
	{"tail", 1, 134218263, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitTest_m6224_MethodInfo = 
{
	"EmitTest"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitTest_m6224_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitBranch_m6226_ParameterInfos[] = 
{
	{"next", 0, 134218264, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBranch_m6226_MethodInfo = 
{
	"EmitBranch"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitBranch_m6226_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitJump_m6223_ParameterInfos[] = 
{
	{"target", 0, 134218265, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitJump_m6223_MethodInfo = 
{
	"EmitJump"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitJump_m6223_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitRepeat_m6219_ParameterInfos[] = 
{
	{"min", 0, 134218266, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 1, 134218267, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 2, 134218268, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"until", 3, 134218269, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitRepeat_m6219_MethodInfo = 
{
	"EmitRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitRepeat_m6219_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitUntil_m6220_ParameterInfos[] = 
{
	{"repeat", 0, 134218270, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitUntil_m6220_MethodInfo = 
{
	"EmitUntil"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitUntil_m6220_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitIn_m6233_ParameterInfos[] = 
{
	{"tail", 0, 134218271, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIn_m6233_MethodInfo = 
{
	"EmitIn"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitIn_m6233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitInfo_m6207_ParameterInfos[] = 
{
	{"count", 0, 134218272, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"min", 1, 134218273, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 2, 134218274, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo ICompiler_EmitInfo_m6207_MethodInfo = 
{
	"EmitInfo"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Int32_t188/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitInfo_m6207_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitFastRepeat_m6221_ParameterInfos[] = 
{
	{"min", 0, 134218275, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 1, 134218276, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 2, 134218277, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"tail", 3, 134218278, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitFastRepeat_m6221_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitFastRepeat_m6221_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_EmitAnchor_m6209_ParameterInfos[] = 
{
	{"reverse", 0, 134218279, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"offset", 1, 134218280, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"tail", 2, 134218281, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitAnchor_m6209_MethodInfo = 
{
	"EmitAnchor"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232_Int32_t188_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_EmitAnchor_m6209_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd()
MethodInfo ICompiler_EmitBranchEnd_m6227_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd()
MethodInfo ICompiler_EmitAlternationEnd_m6228_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink()
MethodInfo ICompiler_NewLink_m6208_MethodInfo = 
{
	"NewLink"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1277_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo ICompiler_t1303_ICompiler_ResolveLink_m6213_ParameterInfos[] = 
{
	{"link", 0, 134218282, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_ResolveLink_m6213_MethodInfo = 
{
	"ResolveLink"/* name */
	, NULL/* method */
	, &ICompiler_t1303_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ICompiler_t1303_ICompiler_ResolveLink_m6213_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ICompiler_t1303_MethodInfos[] =
{
	&ICompiler_GetMachineFactory_m6170_MethodInfo,
	&ICompiler_EmitFalse_m6225_MethodInfo,
	&ICompiler_EmitTrue_m6212_MethodInfo,
	&ICompiler_EmitCharacter_m6229_MethodInfo,
	&ICompiler_EmitCategory_m6236_MethodInfo,
	&ICompiler_EmitNotCategory_m6237_MethodInfo,
	&ICompiler_EmitRange_m6235_MethodInfo,
	&ICompiler_EmitSet_m6234_MethodInfo,
	&ICompiler_EmitString_m6211_MethodInfo,
	&ICompiler_EmitPosition_m6210_MethodInfo,
	&ICompiler_EmitOpen_m6214_MethodInfo,
	&ICompiler_EmitClose_m6215_MethodInfo,
	&ICompiler_EmitBalanceStart_m6216_MethodInfo,
	&ICompiler_EmitBalance_m6217_MethodInfo,
	&ICompiler_EmitReference_m6230_MethodInfo,
	&ICompiler_EmitIfDefined_m6222_MethodInfo,
	&ICompiler_EmitSub_m6218_MethodInfo,
	&ICompiler_EmitTest_m6224_MethodInfo,
	&ICompiler_EmitBranch_m6226_MethodInfo,
	&ICompiler_EmitJump_m6223_MethodInfo,
	&ICompiler_EmitRepeat_m6219_MethodInfo,
	&ICompiler_EmitUntil_m6220_MethodInfo,
	&ICompiler_EmitIn_m6233_MethodInfo,
	&ICompiler_EmitInfo_m6207_MethodInfo,
	&ICompiler_EmitFastRepeat_m6221_MethodInfo,
	&ICompiler_EmitAnchor_m6209_MethodInfo,
	&ICompiler_EmitBranchEnd_m6227_MethodInfo,
	&ICompiler_EmitAlternationEnd_m6228_MethodInfo,
	&ICompiler_NewLink_m6208_MethodInfo,
	&ICompiler_ResolveLink_m6213_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType ICompiler_t1303_1_0_0;
struct ICompiler_t1303;
const Il2CppTypeDefinitionMetadata ICompiler_t1303_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ICompiler_t1303_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ICompiler_t1303_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ICompiler_t1303_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICompiler_t1303_0_0_0/* byval_arg */
	, &ICompiler_t1303_1_0_0/* this_arg */
	, &ICompiler_t1303_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 30/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern TypeInfo InterpreterFactory_t1278_il2cpp_TypeInfo;
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t1189_0_0_0;
extern Il2CppType UInt16U5BU5D_t1189_0_0_0;
static ParameterInfo InterpreterFactory_t1278_InterpreterFactory__ctor_m5602_ParameterInfos[] = 
{
	{"pattern", 0, 134218283, &EmptyCustomAttributesCache, &UInt16U5BU5D_t1189_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
MethodInfo InterpreterFactory__ctor_m5602_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InterpreterFactory__ctor_m5602/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, InterpreterFactory_t1278_InterpreterFactory__ctor_m5602_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachine_t1261_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
MethodInfo InterpreterFactory_NewInstance_m5603_MethodInfo = 
{
	"NewInstance"/* name */
	, (methodPointerType)&InterpreterFactory_NewInstance_m5603/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1261_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
MethodInfo InterpreterFactory_get_GroupCount_m5604_MethodInfo = 
{
	"get_GroupCount"/* name */
	, (methodPointerType)&InterpreterFactory_get_GroupCount_m5604/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
MethodInfo InterpreterFactory_get_Gap_m5605_MethodInfo = 
{
	"get_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_get_Gap_m5605/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo InterpreterFactory_t1278_InterpreterFactory_set_Gap_m5606_ParameterInfos[] = 
{
	{"value", 0, 134218284, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
MethodInfo InterpreterFactory_set_Gap_m5606_MethodInfo = 
{
	"set_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_set_Gap_m5606/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, InterpreterFactory_t1278_InterpreterFactory_set_Gap_m5606_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t1152_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
MethodInfo InterpreterFactory_get_Mapping_m5607_MethodInfo = 
{
	"get_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_Mapping_m5607/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t1152_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t1152_0_0_0;
extern Il2CppType IDictionary_t1152_0_0_0;
static ParameterInfo InterpreterFactory_t1278_InterpreterFactory_set_Mapping_m5608_ParameterInfos[] = 
{
	{"value", 0, 134218285, &EmptyCustomAttributesCache, &IDictionary_t1152_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
MethodInfo InterpreterFactory_set_Mapping_m5608_MethodInfo = 
{
	"set_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_Mapping_m5608/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, InterpreterFactory_t1278_InterpreterFactory_set_Mapping_m5608_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
MethodInfo InterpreterFactory_get_NamesMapping_m5609_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_NamesMapping_m5609/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t215_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t215_0_0_0;
extern Il2CppType StringU5BU5D_t215_0_0_0;
static ParameterInfo InterpreterFactory_t1278_InterpreterFactory_set_NamesMapping_m5610_ParameterInfos[] = 
{
	{"value", 0, 134218286, &EmptyCustomAttributesCache, &StringU5BU5D_t215_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
MethodInfo InterpreterFactory_set_NamesMapping_m5610_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_NamesMapping_m5610/* method */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, InterpreterFactory_t1278_InterpreterFactory_set_NamesMapping_m5610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InterpreterFactory_t1278_MethodInfos[] =
{
	&InterpreterFactory__ctor_m5602_MethodInfo,
	&InterpreterFactory_NewInstance_m5603_MethodInfo,
	&InterpreterFactory_get_GroupCount_m5604_MethodInfo,
	&InterpreterFactory_get_Gap_m5605_MethodInfo,
	&InterpreterFactory_set_Gap_m5606_MethodInfo,
	&InterpreterFactory_get_Mapping_m5607_MethodInfo,
	&InterpreterFactory_set_Mapping_m5608_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m5609_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m5610_MethodInfo,
	NULL
};
extern Il2CppType IDictionary_t1152_0_0_1;
FieldInfo InterpreterFactory_t1278____mapping_0_FieldInfo = 
{
	"mapping"/* name */
	, &IDictionary_t1152_0_0_1/* type */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1278, ___mapping_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UInt16U5BU5D_t1189_0_0_1;
FieldInfo InterpreterFactory_t1278____pattern_1_FieldInfo = 
{
	"pattern"/* name */
	, &UInt16U5BU5D_t1189_0_0_1/* type */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1278, ___pattern_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t215_0_0_1;
FieldInfo InterpreterFactory_t1278____namesMapping_2_FieldInfo = 
{
	"namesMapping"/* name */
	, &StringU5BU5D_t215_0_0_1/* type */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1278, ___namesMapping_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo InterpreterFactory_t1278____gap_3_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t188_0_0_1/* type */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1278, ___gap_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InterpreterFactory_t1278_FieldInfos[] =
{
	&InterpreterFactory_t1278____mapping_0_FieldInfo,
	&InterpreterFactory_t1278____pattern_1_FieldInfo,
	&InterpreterFactory_t1278____namesMapping_2_FieldInfo,
	&InterpreterFactory_t1278____gap_3_FieldInfo,
	NULL
};
extern MethodInfo InterpreterFactory_get_GroupCount_m5604_MethodInfo;
static PropertyInfo InterpreterFactory_t1278____GroupCount_PropertyInfo = 
{
	&InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &InterpreterFactory_get_GroupCount_m5604_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Gap_m5605_MethodInfo;
extern MethodInfo InterpreterFactory_set_Gap_m5606_MethodInfo;
static PropertyInfo InterpreterFactory_t1278____Gap_PropertyInfo = 
{
	&InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &InterpreterFactory_get_Gap_m5605_MethodInfo/* get */
	, &InterpreterFactory_set_Gap_m5606_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Mapping_m5607_MethodInfo;
extern MethodInfo InterpreterFactory_set_Mapping_m5608_MethodInfo;
static PropertyInfo InterpreterFactory_t1278____Mapping_PropertyInfo = 
{
	&InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &InterpreterFactory_get_Mapping_m5607_MethodInfo/* get */
	, &InterpreterFactory_set_Mapping_m5608_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_NamesMapping_m5609_MethodInfo;
extern MethodInfo InterpreterFactory_set_NamesMapping_m5610_MethodInfo;
static PropertyInfo InterpreterFactory_t1278____NamesMapping_PropertyInfo = 
{
	&InterpreterFactory_t1278_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &InterpreterFactory_get_NamesMapping_m5609_MethodInfo/* get */
	, &InterpreterFactory_set_NamesMapping_m5610_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InterpreterFactory_t1278_PropertyInfos[] =
{
	&InterpreterFactory_t1278____GroupCount_PropertyInfo,
	&InterpreterFactory_t1278____Gap_PropertyInfo,
	&InterpreterFactory_t1278____Mapping_PropertyInfo,
	&InterpreterFactory_t1278____NamesMapping_PropertyInfo,
	NULL
};
extern MethodInfo InterpreterFactory_NewInstance_m5603_MethodInfo;
static Il2CppMethodReference InterpreterFactory_t1278_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&InterpreterFactory_NewInstance_m5603_MethodInfo,
	&InterpreterFactory_get_Mapping_m5607_MethodInfo,
	&InterpreterFactory_set_Mapping_m5608_MethodInfo,
	&InterpreterFactory_get_GroupCount_m5604_MethodInfo,
	&InterpreterFactory_get_Gap_m5605_MethodInfo,
	&InterpreterFactory_set_Gap_m5606_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m5609_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m5610_MethodInfo,
};
static bool InterpreterFactory_t1278_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* InterpreterFactory_t1278_InterfacesTypeInfos[] = 
{
	&IMachineFactory_t1265_0_0_0,
};
static Il2CppInterfaceOffsetPair InterpreterFactory_t1278_InterfacesOffsets[] = 
{
	{ &IMachineFactory_t1265_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType InterpreterFactory_t1278_0_0_0;
extern Il2CppType InterpreterFactory_t1278_1_0_0;
struct InterpreterFactory_t1278;
const Il2CppTypeDefinitionMetadata InterpreterFactory_t1278_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, InterpreterFactory_t1278_InterfacesTypeInfos/* implementedInterfaces */
	, InterpreterFactory_t1278_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InterpreterFactory_t1278_VTable/* vtableMethods */
	, InterpreterFactory_t1278_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo InterpreterFactory_t1278_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "InterpreterFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, InterpreterFactory_t1278_MethodInfos/* methods */
	, InterpreterFactory_t1278_PropertyInfos/* properties */
	, InterpreterFactory_t1278_FieldInfos/* fields */
	, NULL/* events */
	, &InterpreterFactory_t1278_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InterpreterFactory_t1278_0_0_0/* byval_arg */
	, &InterpreterFactory_t1278_1_0_0/* this_arg */
	, &InterpreterFactory_t1278_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InterpreterFactory_t1278)/* instance_size */
	, sizeof (InterpreterFactory_t1278)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 4/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern TypeInfo Link_t1279_il2cpp_TypeInfo;
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_PatterMethodDeclarations.h"
static MethodInfo* Link_t1279_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Link_t1279____base_addr_0_FieldInfo = 
{
	"base_addr"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Link_t1279_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1279, ___base_addr_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Link_t1279____offset_addr_1_FieldInfo = 
{
	"offset_addr"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Link_t1279_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1279, ___offset_addr_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Link_t1279_FieldInfos[] =
{
	&Link_t1279____base_addr_0_FieldInfo,
	&Link_t1279____offset_addr_1_FieldInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1103_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1104_MethodInfo;
extern MethodInfo ValueType_ToString_m1105_MethodInfo;
static Il2CppMethodReference Link_t1279_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool Link_t1279_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Link_t1279_0_0_0;
extern Il2CppType Link_t1279_1_0_0;
extern Il2CppType ValueType_t249_0_0_0;
extern TypeInfo PatternLinkStack_t1280_il2cpp_TypeInfo;
extern Il2CppType PatternLinkStack_t1280_0_0_0;
const Il2CppTypeDefinitionMetadata Link_t1279_DefinitionMetadata = 
{
	&PatternLinkStack_t1280_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, Link_t1279_VTable/* vtableMethods */
	, Link_t1279_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Link_t1279_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Link"/* name */
	, ""/* namespaze */
	, Link_t1279_MethodInfos/* methods */
	, NULL/* properties */
	, Link_t1279_FieldInfos/* fields */
	, NULL/* events */
	, &Link_t1279_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Link_t1279_0_0_0/* byval_arg */
	, &Link_t1279_1_0_0/* this_arg */
	, &Link_t1279_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Link_t1279)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Link_t1279)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Link_t1279 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
MethodInfo PatternLinkStack__ctor_m5611_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternLinkStack__ctor_m5611/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternLinkStack_t1280_PatternLinkStack_set_BaseAddress_m5612_ParameterInfos[] = 
{
	{"value", 0, 134218357, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
MethodInfo PatternLinkStack_set_BaseAddress_m5612_MethodInfo = 
{
	"set_BaseAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_BaseAddress_m5612/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, PatternLinkStack_t1280_PatternLinkStack_set_BaseAddress_m5612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
MethodInfo PatternLinkStack_get_OffsetAddress_m5613_MethodInfo = 
{
	"get_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_get_OffsetAddress_m5613/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternLinkStack_t1280_PatternLinkStack_set_OffsetAddress_m5614_ParameterInfos[] = 
{
	{"value", 0, 134218358, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
MethodInfo PatternLinkStack_set_OffsetAddress_m5614_MethodInfo = 
{
	"set_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_OffsetAddress_m5614/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, PatternLinkStack_t1280_PatternLinkStack_set_OffsetAddress_m5614_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternLinkStack_t1280_PatternLinkStack_GetOffset_m5615_ParameterInfos[] = 
{
	{"target_addr", 0, 134218359, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
MethodInfo PatternLinkStack_GetOffset_m5615_MethodInfo = 
{
	"GetOffset"/* name */
	, (methodPointerType)&PatternLinkStack_GetOffset_m5615/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32_t188/* invoker_method */
	, PatternLinkStack_t1280_PatternLinkStack_GetOffset_m5615_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
MethodInfo PatternLinkStack_GetCurrent_m5616_MethodInfo = 
{
	"GetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_GetCurrent_m5616/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PatternLinkStack_t1280_PatternLinkStack_SetCurrent_m5617_ParameterInfos[] = 
{
	{"l", 0, 134218360, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
MethodInfo PatternLinkStack_SetCurrent_m5617_MethodInfo = 
{
	"SetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_SetCurrent_m5617/* method */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternLinkStack_t1280_PatternLinkStack_SetCurrent_m5617_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternLinkStack_t1280_MethodInfos[] =
{
	&PatternLinkStack__ctor_m5611_MethodInfo,
	&PatternLinkStack_set_BaseAddress_m5612_MethodInfo,
	&PatternLinkStack_get_OffsetAddress_m5613_MethodInfo,
	&PatternLinkStack_set_OffsetAddress_m5614_MethodInfo,
	&PatternLinkStack_GetOffset_m5615_MethodInfo,
	&PatternLinkStack_GetCurrent_m5616_MethodInfo,
	&PatternLinkStack_SetCurrent_m5617_MethodInfo,
	NULL
};
extern Il2CppType Link_t1279_0_0_1;
FieldInfo PatternLinkStack_t1280____link_1_FieldInfo = 
{
	"link"/* name */
	, &Link_t1279_0_0_1/* type */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* parent */
	, offsetof(PatternLinkStack_t1280, ___link_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternLinkStack_t1280_FieldInfos[] =
{
	&PatternLinkStack_t1280____link_1_FieldInfo,
	NULL
};
extern MethodInfo PatternLinkStack_set_BaseAddress_m5612_MethodInfo;
static PropertyInfo PatternLinkStack_t1280____BaseAddress_PropertyInfo = 
{
	&PatternLinkStack_t1280_il2cpp_TypeInfo/* parent */
	, "BaseAddress"/* name */
	, NULL/* get */
	, &PatternLinkStack_set_BaseAddress_m5612_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo PatternLinkStack_get_OffsetAddress_m5613_MethodInfo;
extern MethodInfo PatternLinkStack_set_OffsetAddress_m5614_MethodInfo;
static PropertyInfo PatternLinkStack_t1280____OffsetAddress_PropertyInfo = 
{
	&PatternLinkStack_t1280_il2cpp_TypeInfo/* parent */
	, "OffsetAddress"/* name */
	, &PatternLinkStack_get_OffsetAddress_m5613_MethodInfo/* get */
	, &PatternLinkStack_set_OffsetAddress_m5614_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternLinkStack_t1280_PropertyInfos[] =
{
	&PatternLinkStack_t1280____BaseAddress_PropertyInfo,
	&PatternLinkStack_t1280____OffsetAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternLinkStack_t1280_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Link_t1279_0_0_0,
};
extern MethodInfo PatternLinkStack_GetCurrent_m5616_MethodInfo;
extern MethodInfo PatternLinkStack_SetCurrent_m5617_MethodInfo;
static Il2CppMethodReference PatternLinkStack_t1280_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&PatternLinkStack_GetCurrent_m5616_MethodInfo,
	&PatternLinkStack_SetCurrent_m5617_MethodInfo,
};
static bool PatternLinkStack_t1280_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternLinkStack_t1280_1_0_0;
extern Il2CppType LinkStack_t1281_0_0_0;
extern TypeInfo PatternCompiler_t1282_il2cpp_TypeInfo;
extern Il2CppType PatternCompiler_t1282_0_0_0;
struct PatternLinkStack_t1280;
const Il2CppTypeDefinitionMetadata PatternLinkStack_t1280_DefinitionMetadata = 
{
	&PatternCompiler_t1282_0_0_0/* declaringType */
	, PatternLinkStack_t1280_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkStack_t1281_0_0_0/* parent */
	, PatternLinkStack_t1280_VTable/* vtableMethods */
	, PatternLinkStack_t1280_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternLinkStack_t1280_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternLinkStack"/* name */
	, ""/* namespaze */
	, PatternLinkStack_t1280_MethodInfos/* methods */
	, PatternLinkStack_t1280_PropertyInfos/* properties */
	, PatternLinkStack_t1280_FieldInfos/* fields */
	, NULL/* events */
	, &PatternLinkStack_t1280_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternLinkStack_t1280_0_0_0/* byval_arg */
	, &PatternLinkStack_t1280_1_0_0/* this_arg */
	, &PatternLinkStack_t1280_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternLinkStack_t1280)/* instance_size */
	, sizeof (PatternLinkStack_t1280)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
MethodInfo PatternCompiler__ctor_m5618_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternCompiler__ctor_m5618/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1269_0_0_0;
extern Il2CppType OpCode_t1269_0_0_0;
extern Il2CppType OpFlags_t1270_0_0_0;
extern Il2CppType OpFlags_t1270_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EncodeOp_m5619_ParameterInfos[] = 
{
	{"op", 0, 134218287, &EmptyCustomAttributesCache, &OpCode_t1269_0_0_0},
	{"flags", 1, 134218288, &EmptyCustomAttributesCache, &OpFlags_t1270_0_0_0},
};
extern Il2CppType UInt16_t915_0_0_0;
extern void* RuntimeInvoker_UInt16_t915_UInt16_t915_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_EncodeOp_m5619_MethodInfo = 
{
	"EncodeOp"/* name */
	, (methodPointerType)&PatternCompiler_EncodeOp_m5619/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t915_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t915_UInt16_t915_UInt16_t915/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EncodeOp_m5619_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachineFactory_t1265_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
MethodInfo PatternCompiler_GetMachineFactory_m5620_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, (methodPointerType)&PatternCompiler_GetMachineFactory_m5620/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1265_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
MethodInfo PatternCompiler_EmitFalse_m5621_MethodInfo = 
{
	"EmitFalse"/* name */
	, (methodPointerType)&PatternCompiler_EmitFalse_m5621/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
MethodInfo PatternCompiler_EmitTrue_m5622_MethodInfo = 
{
	"EmitTrue"/* name */
	, (methodPointerType)&PatternCompiler_EmitTrue_m5622/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitCount_m5623_ParameterInfos[] = 
{
	{"count", 0, 134218289, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
MethodInfo PatternCompiler_EmitCount_m5623_MethodInfo = 
{
	"EmitCount"/* name */
	, (methodPointerType)&PatternCompiler_EmitCount_m5623/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitCount_m5623_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitCharacter_m5624_ParameterInfos[] = 
{
	{"c", 0, 134218290, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"negate", 1, 134218291, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 2, 134218292, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 3, 134218293, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCharacter_m5624_MethodInfo = 
{
	"EmitCharacter"/* name */
	, (methodPointerType)&PatternCompiler_EmitCharacter_m5624/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitCharacter_m5624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitCategory_m5625_ParameterInfos[] = 
{
	{"cat", 0, 134218294, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218295, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218296, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCategory_m5625_MethodInfo = 
{
	"EmitCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitCategory_m5625/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitCategory_m5625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitNotCategory_m5626_ParameterInfos[] = 
{
	{"cat", 0, 134218297, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218298, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218299, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitNotCategory_m5626_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitNotCategory_m5626/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitNotCategory_m5626_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitRange_m5627_ParameterInfos[] = 
{
	{"lo", 0, 134218300, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"hi", 1, 134218301, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"negate", 2, 134218302, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 3, 134218303, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 4, 134218304, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_Int16_t596_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitRange_m5627_MethodInfo = 
{
	"EmitRange"/* name */
	, (methodPointerType)&PatternCompiler_EmitRange_m5627/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_Int16_t596_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitRange_m5627_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType BitArray_t1283_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitSet_m5628_ParameterInfos[] = 
{
	{"lo", 0, 134218305, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"set", 1, 134218306, &EmptyCustomAttributesCache, &BitArray_t1283_0_0_0},
	{"negate", 2, 134218307, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 3, 134218308, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 4, 134218309, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_Object_t_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitSet_m5628_MethodInfo = 
{
	"EmitSet"/* name */
	, (methodPointerType)&PatternCompiler_EmitSet_m5628/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_Object_t_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitSet_m5628_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitString_m5629_ParameterInfos[] = 
{
	{"str", 0, 134218310, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218311, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218312, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitString_m5629_MethodInfo = 
{
	"EmitString"/* name */
	, (methodPointerType)&PatternCompiler_EmitString_m5629/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitString_m5629_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1271_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitPosition_m5630_ParameterInfos[] = 
{
	{"pos", 0, 134218313, &EmptyCustomAttributesCache, &Position_t1271_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo PatternCompiler_EmitPosition_m5630_MethodInfo = 
{
	"EmitPosition"/* name */
	, (methodPointerType)&PatternCompiler_EmitPosition_m5630/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitPosition_m5630_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitOpen_m5631_ParameterInfos[] = 
{
	{"gid", 0, 134218314, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
MethodInfo PatternCompiler_EmitOpen_m5631_MethodInfo = 
{
	"EmitOpen"/* name */
	, (methodPointerType)&PatternCompiler_EmitOpen_m5631/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitOpen_m5631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitClose_m5632_ParameterInfos[] = 
{
	{"gid", 0, 134218315, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
MethodInfo PatternCompiler_EmitClose_m5632_MethodInfo = 
{
	"EmitClose"/* name */
	, (methodPointerType)&PatternCompiler_EmitClose_m5632/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitClose_m5632_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitBalanceStart_m5633_ParameterInfos[] = 
{
	{"gid", 0, 134218316, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"balance", 1, 134218317, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"capture", 2, 134218318, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"tail", 3, 134218319, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBalanceStart_m5633_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalanceStart_m5633/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitBalanceStart_m5633_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
MethodInfo PatternCompiler_EmitBalance_m5634_MethodInfo = 
{
	"EmitBalance"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalance_m5634/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitReference_m5635_ParameterInfos[] = 
{
	{"gid", 0, 134218320, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"ignore", 1, 134218321, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218322, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitReference_m5635_MethodInfo = 
{
	"EmitReference"/* name */
	, (methodPointerType)&PatternCompiler_EmitReference_m5635/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitReference_m5635_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitIfDefined_m5636_ParameterInfos[] = 
{
	{"gid", 0, 134218323, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"tail", 1, 134218324, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIfDefined_m5636_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, (methodPointerType)&PatternCompiler_EmitIfDefined_m5636/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitIfDefined_m5636_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitSub_m5637_ParameterInfos[] = 
{
	{"tail", 0, 134218325, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitSub_m5637_MethodInfo = 
{
	"EmitSub"/* name */
	, (methodPointerType)&PatternCompiler_EmitSub_m5637/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitSub_m5637_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitTest_m5638_ParameterInfos[] = 
{
	{"yes", 0, 134218326, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
	{"tail", 1, 134218327, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitTest_m5638_MethodInfo = 
{
	"EmitTest"/* name */
	, (methodPointerType)&PatternCompiler_EmitTest_m5638/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitTest_m5638_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitBranch_m5639_ParameterInfos[] = 
{
	{"next", 0, 134218328, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBranch_m5639_MethodInfo = 
{
	"EmitBranch"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranch_m5639/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitBranch_m5639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitJump_m5640_ParameterInfos[] = 
{
	{"target", 0, 134218329, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitJump_m5640_MethodInfo = 
{
	"EmitJump"/* name */
	, (methodPointerType)&PatternCompiler_EmitJump_m5640/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitJump_m5640_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitRepeat_m5641_ParameterInfos[] = 
{
	{"min", 0, 134218330, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 1, 134218331, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 2, 134218332, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"until", 3, 134218333, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitRepeat_m5641_MethodInfo = 
{
	"EmitRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitRepeat_m5641/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitRepeat_m5641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitUntil_m5642_ParameterInfos[] = 
{
	{"repeat", 0, 134218334, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitUntil_m5642_MethodInfo = 
{
	"EmitUntil"/* name */
	, (methodPointerType)&PatternCompiler_EmitUntil_m5642/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitUntil_m5642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitFastRepeat_m5643_ParameterInfos[] = 
{
	{"min", 0, 134218335, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 1, 134218336, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 2, 134218337, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"tail", 3, 134218338, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitFastRepeat_m5643_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitFastRepeat_m5643/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitFastRepeat_m5643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitIn_m5644_ParameterInfos[] = 
{
	{"tail", 0, 134218339, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIn_m5644_MethodInfo = 
{
	"EmitIn"/* name */
	, (methodPointerType)&PatternCompiler_EmitIn_m5644/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitIn_m5644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitAnchor_m5645_ParameterInfos[] = 
{
	{"reverse", 0, 134218340, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"offset", 1, 134218341, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"tail", 2, 134218342, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitAnchor_m5645_MethodInfo = 
{
	"EmitAnchor"/* name */
	, (methodPointerType)&PatternCompiler_EmitAnchor_m5645/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232_Int32_t188_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitAnchor_m5645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitInfo_m5646_ParameterInfos[] = 
{
	{"count", 0, 134218343, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"min", 1, 134218344, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 2, 134218345, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo PatternCompiler_EmitInfo_m5646_MethodInfo = 
{
	"EmitInfo"/* name */
	, (methodPointerType)&PatternCompiler_EmitInfo_m5646/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Int32_t188/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitInfo_m5646_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
MethodInfo PatternCompiler_NewLink_m5647_MethodInfo = 
{
	"NewLink"/* name */
	, (methodPointerType)&PatternCompiler_NewLink_m5647/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1277_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_ResolveLink_m5648_ParameterInfos[] = 
{
	{"lref", 0, 134218346, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_ResolveLink_m5648_MethodInfo = 
{
	"ResolveLink"/* name */
	, (methodPointerType)&PatternCompiler_ResolveLink_m5648/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_ResolveLink_m5648_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
MethodInfo PatternCompiler_EmitBranchEnd_m5649_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranchEnd_m5649/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
MethodInfo PatternCompiler_EmitAlternationEnd_m5650_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitAlternationEnd_m5650/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_MakeFlags_m5651_ParameterInfos[] = 
{
	{"negate", 0, 134218347, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 1, 134218348, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218349, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"lazy", 3, 134218350, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType OpFlags_t1270_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1270_SByte_t232_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_MakeFlags_m5651_MethodInfo = 
{
	"MakeFlags"/* name */
	, (methodPointerType)&PatternCompiler_MakeFlags_m5651/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1270_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1270_SByte_t232_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_MakeFlags_m5651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1269_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_Emit_m5652_ParameterInfos[] = 
{
	{"op", 0, 134218351, &EmptyCustomAttributesCache, &OpCode_t1269_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
MethodInfo PatternCompiler_Emit_m5652_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m5652/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_Emit_m5652_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1269_0_0_0;
extern Il2CppType OpFlags_t1270_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_Emit_m5653_ParameterInfos[] = 
{
	{"op", 0, 134218352, &EmptyCustomAttributesCache, &OpCode_t1269_0_0_0},
	{"flags", 1, 134218353, &EmptyCustomAttributesCache, &OpFlags_t1270_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_Emit_m5653_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m5653/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_UInt16_t915/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_Emit_m5653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UInt16_t915_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_Emit_m5654_ParameterInfos[] = 
{
	{"word", 0, 134218354, &EmptyCustomAttributesCache, &UInt16_t915_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
MethodInfo PatternCompiler_Emit_m5654_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m5654/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_Emit_m5654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
MethodInfo PatternCompiler_get_CurrentAddress_m5655_MethodInfo = 
{
	"get_CurrentAddress"/* name */
	, (methodPointerType)&PatternCompiler_get_CurrentAddress_m5655/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_BeginLink_m5656_ParameterInfos[] = 
{
	{"lref", 0, 134218355, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_BeginLink_m5656_MethodInfo = 
{
	"BeginLink"/* name */
	, (methodPointerType)&PatternCompiler_BeginLink_m5656/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_BeginLink_m5656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1277_0_0_0;
static ParameterInfo PatternCompiler_t1282_PatternCompiler_EmitLink_m5657_ParameterInfos[] = 
{
	{"lref", 0, 134218356, &EmptyCustomAttributesCache, &LinkRef_t1277_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitLink_m5657_MethodInfo = 
{
	"EmitLink"/* name */
	, (methodPointerType)&PatternCompiler_EmitLink_m5657/* method */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, PatternCompiler_t1282_PatternCompiler_EmitLink_m5657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternCompiler_t1282_MethodInfos[] =
{
	&PatternCompiler__ctor_m5618_MethodInfo,
	&PatternCompiler_EncodeOp_m5619_MethodInfo,
	&PatternCompiler_GetMachineFactory_m5620_MethodInfo,
	&PatternCompiler_EmitFalse_m5621_MethodInfo,
	&PatternCompiler_EmitTrue_m5622_MethodInfo,
	&PatternCompiler_EmitCount_m5623_MethodInfo,
	&PatternCompiler_EmitCharacter_m5624_MethodInfo,
	&PatternCompiler_EmitCategory_m5625_MethodInfo,
	&PatternCompiler_EmitNotCategory_m5626_MethodInfo,
	&PatternCompiler_EmitRange_m5627_MethodInfo,
	&PatternCompiler_EmitSet_m5628_MethodInfo,
	&PatternCompiler_EmitString_m5629_MethodInfo,
	&PatternCompiler_EmitPosition_m5630_MethodInfo,
	&PatternCompiler_EmitOpen_m5631_MethodInfo,
	&PatternCompiler_EmitClose_m5632_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m5633_MethodInfo,
	&PatternCompiler_EmitBalance_m5634_MethodInfo,
	&PatternCompiler_EmitReference_m5635_MethodInfo,
	&PatternCompiler_EmitIfDefined_m5636_MethodInfo,
	&PatternCompiler_EmitSub_m5637_MethodInfo,
	&PatternCompiler_EmitTest_m5638_MethodInfo,
	&PatternCompiler_EmitBranch_m5639_MethodInfo,
	&PatternCompiler_EmitJump_m5640_MethodInfo,
	&PatternCompiler_EmitRepeat_m5641_MethodInfo,
	&PatternCompiler_EmitUntil_m5642_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m5643_MethodInfo,
	&PatternCompiler_EmitIn_m5644_MethodInfo,
	&PatternCompiler_EmitAnchor_m5645_MethodInfo,
	&PatternCompiler_EmitInfo_m5646_MethodInfo,
	&PatternCompiler_NewLink_m5647_MethodInfo,
	&PatternCompiler_ResolveLink_m5648_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m5649_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m5650_MethodInfo,
	&PatternCompiler_MakeFlags_m5651_MethodInfo,
	&PatternCompiler_Emit_m5652_MethodInfo,
	&PatternCompiler_Emit_m5653_MethodInfo,
	&PatternCompiler_Emit_m5654_MethodInfo,
	&PatternCompiler_get_CurrentAddress_m5655_MethodInfo,
	&PatternCompiler_BeginLink_m5656_MethodInfo,
	&PatternCompiler_EmitLink_m5657_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t1161_0_0_1;
FieldInfo PatternCompiler_t1282____pgm_0_FieldInfo = 
{
	"pgm"/* name */
	, &ArrayList_t1161_0_0_1/* type */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* parent */
	, offsetof(PatternCompiler_t1282, ___pgm_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternCompiler_t1282_FieldInfos[] =
{
	&PatternCompiler_t1282____pgm_0_FieldInfo,
	NULL
};
extern MethodInfo PatternCompiler_get_CurrentAddress_m5655_MethodInfo;
static PropertyInfo PatternCompiler_t1282____CurrentAddress_PropertyInfo = 
{
	&PatternCompiler_t1282_il2cpp_TypeInfo/* parent */
	, "CurrentAddress"/* name */
	, &PatternCompiler_get_CurrentAddress_m5655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternCompiler_t1282_PropertyInfos[] =
{
	&PatternCompiler_t1282____CurrentAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternCompiler_t1282_il2cpp_TypeInfo__nestedTypes[1] =
{
	&PatternLinkStack_t1280_0_0_0,
};
extern MethodInfo PatternCompiler_GetMachineFactory_m5620_MethodInfo;
extern MethodInfo PatternCompiler_EmitFalse_m5621_MethodInfo;
extern MethodInfo PatternCompiler_EmitTrue_m5622_MethodInfo;
extern MethodInfo PatternCompiler_EmitCharacter_m5624_MethodInfo;
extern MethodInfo PatternCompiler_EmitCategory_m5625_MethodInfo;
extern MethodInfo PatternCompiler_EmitNotCategory_m5626_MethodInfo;
extern MethodInfo PatternCompiler_EmitRange_m5627_MethodInfo;
extern MethodInfo PatternCompiler_EmitSet_m5628_MethodInfo;
extern MethodInfo PatternCompiler_EmitString_m5629_MethodInfo;
extern MethodInfo PatternCompiler_EmitPosition_m5630_MethodInfo;
extern MethodInfo PatternCompiler_EmitOpen_m5631_MethodInfo;
extern MethodInfo PatternCompiler_EmitClose_m5632_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalanceStart_m5633_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalance_m5634_MethodInfo;
extern MethodInfo PatternCompiler_EmitReference_m5635_MethodInfo;
extern MethodInfo PatternCompiler_EmitIfDefined_m5636_MethodInfo;
extern MethodInfo PatternCompiler_EmitSub_m5637_MethodInfo;
extern MethodInfo PatternCompiler_EmitTest_m5638_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranch_m5639_MethodInfo;
extern MethodInfo PatternCompiler_EmitJump_m5640_MethodInfo;
extern MethodInfo PatternCompiler_EmitRepeat_m5641_MethodInfo;
extern MethodInfo PatternCompiler_EmitUntil_m5642_MethodInfo;
extern MethodInfo PatternCompiler_EmitIn_m5644_MethodInfo;
extern MethodInfo PatternCompiler_EmitInfo_m5646_MethodInfo;
extern MethodInfo PatternCompiler_EmitFastRepeat_m5643_MethodInfo;
extern MethodInfo PatternCompiler_EmitAnchor_m5645_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranchEnd_m5649_MethodInfo;
extern MethodInfo PatternCompiler_EmitAlternationEnd_m5650_MethodInfo;
extern MethodInfo PatternCompiler_NewLink_m5647_MethodInfo;
extern MethodInfo PatternCompiler_ResolveLink_m5648_MethodInfo;
static Il2CppMethodReference PatternCompiler_t1282_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&PatternCompiler_GetMachineFactory_m5620_MethodInfo,
	&PatternCompiler_EmitFalse_m5621_MethodInfo,
	&PatternCompiler_EmitTrue_m5622_MethodInfo,
	&PatternCompiler_EmitCharacter_m5624_MethodInfo,
	&PatternCompiler_EmitCategory_m5625_MethodInfo,
	&PatternCompiler_EmitNotCategory_m5626_MethodInfo,
	&PatternCompiler_EmitRange_m5627_MethodInfo,
	&PatternCompiler_EmitSet_m5628_MethodInfo,
	&PatternCompiler_EmitString_m5629_MethodInfo,
	&PatternCompiler_EmitPosition_m5630_MethodInfo,
	&PatternCompiler_EmitOpen_m5631_MethodInfo,
	&PatternCompiler_EmitClose_m5632_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m5633_MethodInfo,
	&PatternCompiler_EmitBalance_m5634_MethodInfo,
	&PatternCompiler_EmitReference_m5635_MethodInfo,
	&PatternCompiler_EmitIfDefined_m5636_MethodInfo,
	&PatternCompiler_EmitSub_m5637_MethodInfo,
	&PatternCompiler_EmitTest_m5638_MethodInfo,
	&PatternCompiler_EmitBranch_m5639_MethodInfo,
	&PatternCompiler_EmitJump_m5640_MethodInfo,
	&PatternCompiler_EmitRepeat_m5641_MethodInfo,
	&PatternCompiler_EmitUntil_m5642_MethodInfo,
	&PatternCompiler_EmitIn_m5644_MethodInfo,
	&PatternCompiler_EmitInfo_m5646_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m5643_MethodInfo,
	&PatternCompiler_EmitAnchor_m5645_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m5649_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m5650_MethodInfo,
	&PatternCompiler_NewLink_m5647_MethodInfo,
	&PatternCompiler_ResolveLink_m5648_MethodInfo,
};
static bool PatternCompiler_t1282_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PatternCompiler_t1282_InterfacesTypeInfos[] = 
{
	&ICompiler_t1303_0_0_0,
};
static Il2CppInterfaceOffsetPair PatternCompiler_t1282_InterfacesOffsets[] = 
{
	{ &ICompiler_t1303_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternCompiler_t1282_1_0_0;
struct PatternCompiler_t1282;
const Il2CppTypeDefinitionMetadata PatternCompiler_t1282_DefinitionMetadata = 
{
	NULL/* declaringType */
	, PatternCompiler_t1282_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, PatternCompiler_t1282_InterfacesTypeInfos/* implementedInterfaces */
	, PatternCompiler_t1282_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PatternCompiler_t1282_VTable/* vtableMethods */
	, PatternCompiler_t1282_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternCompiler_t1282_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternCompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, PatternCompiler_t1282_MethodInfos/* methods */
	, PatternCompiler_t1282_PropertyInfos/* properties */
	, PatternCompiler_t1282_FieldInfos/* fields */
	, NULL/* events */
	, &PatternCompiler_t1282_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternCompiler_t1282_0_0_0/* byval_arg */
	, &PatternCompiler_t1282_1_0_0/* this_arg */
	, &PatternCompiler_t1282_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternCompiler_t1282)/* instance_size */
	, sizeof (PatternCompiler_t1282)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 40/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 34/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern TypeInfo LinkStack_t1281_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
MethodInfo LinkStack__ctor_m5658_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkStack__ctor_m5658/* method */
	, &LinkStack_t1281_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::Push()
MethodInfo LinkStack_Push_m5659_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&LinkStack_Push_m5659/* method */
	, &LinkStack_t1281_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
MethodInfo LinkStack_Pop_m5660_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&LinkStack_Pop_m5660/* method */
	, &LinkStack_t1281_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.LinkStack::GetCurrent()
MethodInfo LinkStack_GetCurrent_m6191_MethodInfo = 
{
	"GetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1281_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo LinkStack_t1281_LinkStack_SetCurrent_m6192_ParameterInfos[] = 
{
	{"l", 0, 134218361, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object)
MethodInfo LinkStack_SetCurrent_m6192_MethodInfo = 
{
	"SetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1281_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, LinkStack_t1281_LinkStack_SetCurrent_m6192_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkStack_t1281_MethodInfos[] =
{
	&LinkStack__ctor_m5658_MethodInfo,
	&LinkStack_Push_m5659_MethodInfo,
	&LinkStack_Pop_m5660_MethodInfo,
	&LinkStack_GetCurrent_m6191_MethodInfo,
	&LinkStack_SetCurrent_m6192_MethodInfo,
	NULL
};
extern Il2CppType Stack_t896_0_0_1;
FieldInfo LinkStack_t1281____stack_0_FieldInfo = 
{
	"stack"/* name */
	, &Stack_t896_0_0_1/* type */
	, &LinkStack_t1281_il2cpp_TypeInfo/* parent */
	, offsetof(LinkStack_t1281, ___stack_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LinkStack_t1281_FieldInfos[] =
{
	&LinkStack_t1281____stack_0_FieldInfo,
	NULL
};
static Il2CppMethodReference LinkStack_t1281_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	NULL,
	NULL,
};
static bool LinkStack_t1281_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkStack_t1281_1_0_0;
struct LinkStack_t1281;
const Il2CppTypeDefinitionMetadata LinkStack_t1281_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkRef_t1277_0_0_0/* parent */
	, LinkStack_t1281_VTable/* vtableMethods */
	, LinkStack_t1281_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkStack_t1281_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkStack"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkStack_t1281_MethodInfos/* methods */
	, NULL/* properties */
	, LinkStack_t1281_FieldInfos/* fields */
	, NULL/* events */
	, &LinkStack_t1281_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkStack_t1281_0_0_0/* byval_arg */
	, &LinkStack_t1281_1_0_0/* this_arg */
	, &LinkStack_t1281_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkStack_t1281)/* instance_size */
	, sizeof (LinkStack_t1281)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Metadata Definition System.Text.RegularExpressions.Mark
extern TypeInfo Mark_t1284_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
MethodInfo Mark_get_IsDefined_m5661_MethodInfo = 
{
	"get_IsDefined"/* name */
	, (methodPointerType)&Mark_get_IsDefined_m5661/* method */
	, &Mark_t1284_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
MethodInfo Mark_get_Index_m5662_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&Mark_get_Index_m5662/* method */
	, &Mark_t1284_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
MethodInfo Mark_get_Length_m5663_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&Mark_get_Length_m5663/* method */
	, &Mark_t1284_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Mark_t1284_MethodInfos[] =
{
	&Mark_get_IsDefined_m5661_MethodInfo,
	&Mark_get_Index_m5662_MethodInfo,
	&Mark_get_Length_m5663_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Mark_t1284____Start_0_FieldInfo = 
{
	"Start"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Mark_t1284_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1284, ___Start_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Mark_t1284____End_1_FieldInfo = 
{
	"End"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Mark_t1284_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1284, ___End_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Mark_t1284____Previous_2_FieldInfo = 
{
	"Previous"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Mark_t1284_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1284, ___Previous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mark_t1284_FieldInfos[] =
{
	&Mark_t1284____Start_0_FieldInfo,
	&Mark_t1284____End_1_FieldInfo,
	&Mark_t1284____Previous_2_FieldInfo,
	NULL
};
extern MethodInfo Mark_get_IsDefined_m5661_MethodInfo;
static PropertyInfo Mark_t1284____IsDefined_PropertyInfo = 
{
	&Mark_t1284_il2cpp_TypeInfo/* parent */
	, "IsDefined"/* name */
	, &Mark_get_IsDefined_m5661_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Index_m5662_MethodInfo;
static PropertyInfo Mark_t1284____Index_PropertyInfo = 
{
	&Mark_t1284_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &Mark_get_Index_m5662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Length_m5663_MethodInfo;
static PropertyInfo Mark_t1284____Length_PropertyInfo = 
{
	&Mark_t1284_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &Mark_get_Length_m5663_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Mark_t1284_PropertyInfos[] =
{
	&Mark_t1284____IsDefined_PropertyInfo,
	&Mark_t1284____Index_PropertyInfo,
	&Mark_t1284____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference Mark_t1284_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool Mark_t1284_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mark_t1284_0_0_0;
extern Il2CppType Mark_t1284_1_0_0;
const Il2CppTypeDefinitionMetadata Mark_t1284_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, Mark_t1284_VTable/* vtableMethods */
	, Mark_t1284_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mark_t1284_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mark"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Mark_t1284_MethodInfos/* methods */
	, Mark_t1284_PropertyInfos/* properties */
	, Mark_t1284_FieldInfos/* fields */
	, NULL/* events */
	, &Mark_t1284_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mark_t1284_0_0_0/* byval_arg */
	, &Mark_t1284_1_0_0/* this_arg */
	, &Mark_t1284_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mark_t1284)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mark_t1284)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Mark_t1284 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 3/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern TypeInfo IntStack_t1285_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
MethodInfo IntStack_Pop_m5664_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&IntStack_Pop_m5664/* method */
	, &IntStack_t1285_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo IntStack_t1285_IntStack_Push_m5665_ParameterInfos[] = 
{
	{"value", 0, 134218399, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
MethodInfo IntStack_Push_m5665_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&IntStack_Push_m5665/* method */
	, &IntStack_t1285_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, IntStack_t1285_IntStack_Push_m5665_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
MethodInfo IntStack_get_Count_m5666_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntStack_get_Count_m5666/* method */
	, &IntStack_t1285_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo IntStack_t1285_IntStack_set_Count_m5667_ParameterInfos[] = 
{
	{"value", 0, 134218400, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
MethodInfo IntStack_set_Count_m5667_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&IntStack_set_Count_m5667/* method */
	, &IntStack_t1285_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, IntStack_t1285_IntStack_set_Count_m5667_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntStack_t1285_MethodInfos[] =
{
	&IntStack_Pop_m5664_MethodInfo,
	&IntStack_Push_m5665_MethodInfo,
	&IntStack_get_Count_m5666_MethodInfo,
	&IntStack_set_Count_m5667_MethodInfo,
	NULL
};
extern Il2CppType Int32U5BU5D_t1266_0_0_1;
FieldInfo IntStack_t1285____values_0_FieldInfo = 
{
	"values"/* name */
	, &Int32U5BU5D_t1266_0_0_1/* type */
	, &IntStack_t1285_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1285, ___values_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo IntStack_t1285____count_1_FieldInfo = 
{
	"count"/* name */
	, &Int32_t188_0_0_1/* type */
	, &IntStack_t1285_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1285, ___count_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntStack_t1285_FieldInfos[] =
{
	&IntStack_t1285____values_0_FieldInfo,
	&IntStack_t1285____count_1_FieldInfo,
	NULL
};
extern MethodInfo IntStack_get_Count_m5666_MethodInfo;
extern MethodInfo IntStack_set_Count_m5667_MethodInfo;
static PropertyInfo IntStack_t1285____Count_PropertyInfo = 
{
	&IntStack_t1285_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntStack_get_Count_m5666_MethodInfo/* get */
	, &IntStack_set_Count_m5667_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntStack_t1285_PropertyInfos[] =
{
	&IntStack_t1285____Count_PropertyInfo,
	NULL
};
static Il2CppMethodReference IntStack_t1285_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool IntStack_t1285_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntStack_t1285_0_0_0;
extern Il2CppType IntStack_t1285_1_0_0;
extern TypeInfo Interpreter_t1290_il2cpp_TypeInfo;
extern Il2CppType Interpreter_t1290_0_0_0;
const Il2CppTypeDefinitionMetadata IntStack_t1285_DefinitionMetadata = 
{
	&Interpreter_t1290_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, IntStack_t1285_VTable/* vtableMethods */
	, IntStack_t1285_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntStack_t1285_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntStack"/* name */
	, ""/* namespaze */
	, IntStack_t1285_MethodInfos/* methods */
	, IntStack_t1285_PropertyInfos/* properties */
	, IntStack_t1285_FieldInfos/* fields */
	, NULL/* events */
	, &IntStack_t1285_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IntStack_t1285_0_0_0/* byval_arg */
	, &IntStack_t1285_1_0_0/* this_arg */
	, &IntStack_t1285_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)IntStack_t1285_marshal/* marshal_to_native_func */
	, (methodPointerType)IntStack_t1285_marshal_back/* marshal_from_native_func */
	, (methodPointerType)IntStack_t1285_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (IntStack_t1285)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (IntStack_t1285)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(IntStack_t1285_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern TypeInfo RepeatContext_t1286_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
extern Il2CppType RepeatContext_t1286_0_0_0;
extern Il2CppType RepeatContext_t1286_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo RepeatContext_t1286_RepeatContext__ctor_m5668_ParameterInfos[] = 
{
	{"previous", 0, 134218401, &EmptyCustomAttributesCache, &RepeatContext_t1286_0_0_0},
	{"min", 1, 134218402, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 2, 134218403, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 3, 134218404, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"expr_pc", 4, 134218405, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_SByte_t232_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo RepeatContext__ctor_m5668_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RepeatContext__ctor_m5668/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_SByte_t232_Int32_t188/* invoker_method */
	, RepeatContext_t1286_RepeatContext__ctor_m5668_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
MethodInfo RepeatContext_get_Count_m5669_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&RepeatContext_get_Count_m5669/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo RepeatContext_t1286_RepeatContext_set_Count_m5670_ParameterInfos[] = 
{
	{"value", 0, 134218406, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
MethodInfo RepeatContext_set_Count_m5670_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&RepeatContext_set_Count_m5670/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, RepeatContext_t1286_RepeatContext_set_Count_m5670_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
MethodInfo RepeatContext_get_Start_m5671_MethodInfo = 
{
	"get_Start"/* name */
	, (methodPointerType)&RepeatContext_get_Start_m5671/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo RepeatContext_t1286_RepeatContext_set_Start_m5672_ParameterInfos[] = 
{
	{"value", 0, 134218407, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
MethodInfo RepeatContext_set_Start_m5672_MethodInfo = 
{
	"set_Start"/* name */
	, (methodPointerType)&RepeatContext_set_Start_m5672/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, RepeatContext_t1286_RepeatContext_set_Start_m5672_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
MethodInfo RepeatContext_get_IsMinimum_m5673_MethodInfo = 
{
	"get_IsMinimum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMinimum_m5673/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
MethodInfo RepeatContext_get_IsMaximum_m5674_MethodInfo = 
{
	"get_IsMaximum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMaximum_m5674/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
MethodInfo RepeatContext_get_IsLazy_m5675_MethodInfo = 
{
	"get_IsLazy"/* name */
	, (methodPointerType)&RepeatContext_get_IsLazy_m5675/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
MethodInfo RepeatContext_get_Expression_m5676_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&RepeatContext_get_Expression_m5676/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RepeatContext_t1286_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
MethodInfo RepeatContext_get_Previous_m5677_MethodInfo = 
{
	"get_Previous"/* name */
	, (methodPointerType)&RepeatContext_get_Previous_m5677/* method */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* declaring_type */
	, &RepeatContext_t1286_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RepeatContext_t1286_MethodInfos[] =
{
	&RepeatContext__ctor_m5668_MethodInfo,
	&RepeatContext_get_Count_m5669_MethodInfo,
	&RepeatContext_set_Count_m5670_MethodInfo,
	&RepeatContext_get_Start_m5671_MethodInfo,
	&RepeatContext_set_Start_m5672_MethodInfo,
	&RepeatContext_get_IsMinimum_m5673_MethodInfo,
	&RepeatContext_get_IsMaximum_m5674_MethodInfo,
	&RepeatContext_get_IsLazy_m5675_MethodInfo,
	&RepeatContext_get_Expression_m5676_MethodInfo,
	&RepeatContext_get_Previous_m5677_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RepeatContext_t1286____start_0_FieldInfo = 
{
	"start"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___start_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RepeatContext_t1286____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RepeatContext_t1286____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo RepeatContext_t1286____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RepeatContext_t1286____expr_pc_4_FieldInfo = 
{
	"expr_pc"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___expr_pc_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1286_0_0_1;
FieldInfo RepeatContext_t1286____previous_5_FieldInfo = 
{
	"previous"/* name */
	, &RepeatContext_t1286_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___previous_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RepeatContext_t1286____count_6_FieldInfo = 
{
	"count"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1286, ___count_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RepeatContext_t1286_FieldInfos[] =
{
	&RepeatContext_t1286____start_0_FieldInfo,
	&RepeatContext_t1286____min_1_FieldInfo,
	&RepeatContext_t1286____max_2_FieldInfo,
	&RepeatContext_t1286____lazy_3_FieldInfo,
	&RepeatContext_t1286____expr_pc_4_FieldInfo,
	&RepeatContext_t1286____previous_5_FieldInfo,
	&RepeatContext_t1286____count_6_FieldInfo,
	NULL
};
extern MethodInfo RepeatContext_get_Count_m5669_MethodInfo;
extern MethodInfo RepeatContext_set_Count_m5670_MethodInfo;
static PropertyInfo RepeatContext_t1286____Count_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &RepeatContext_get_Count_m5669_MethodInfo/* get */
	, &RepeatContext_set_Count_m5670_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Start_m5671_MethodInfo;
extern MethodInfo RepeatContext_set_Start_m5672_MethodInfo;
static PropertyInfo RepeatContext_t1286____Start_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "Start"/* name */
	, &RepeatContext_get_Start_m5671_MethodInfo/* get */
	, &RepeatContext_set_Start_m5672_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMinimum_m5673_MethodInfo;
static PropertyInfo RepeatContext_t1286____IsMinimum_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "IsMinimum"/* name */
	, &RepeatContext_get_IsMinimum_m5673_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMaximum_m5674_MethodInfo;
static PropertyInfo RepeatContext_t1286____IsMaximum_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "IsMaximum"/* name */
	, &RepeatContext_get_IsMaximum_m5674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsLazy_m5675_MethodInfo;
static PropertyInfo RepeatContext_t1286____IsLazy_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "IsLazy"/* name */
	, &RepeatContext_get_IsLazy_m5675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Expression_m5676_MethodInfo;
static PropertyInfo RepeatContext_t1286____Expression_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &RepeatContext_get_Expression_m5676_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Previous_m5677_MethodInfo;
static PropertyInfo RepeatContext_t1286____Previous_PropertyInfo = 
{
	&RepeatContext_t1286_il2cpp_TypeInfo/* parent */
	, "Previous"/* name */
	, &RepeatContext_get_Previous_m5677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RepeatContext_t1286_PropertyInfos[] =
{
	&RepeatContext_t1286____Count_PropertyInfo,
	&RepeatContext_t1286____Start_PropertyInfo,
	&RepeatContext_t1286____IsMinimum_PropertyInfo,
	&RepeatContext_t1286____IsMaximum_PropertyInfo,
	&RepeatContext_t1286____IsLazy_PropertyInfo,
	&RepeatContext_t1286____Expression_PropertyInfo,
	&RepeatContext_t1286____Previous_PropertyInfo,
	NULL
};
static Il2CppMethodReference RepeatContext_t1286_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool RepeatContext_t1286_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RepeatContext_t1286_1_0_0;
struct RepeatContext_t1286;
const Il2CppTypeDefinitionMetadata RepeatContext_t1286_DefinitionMetadata = 
{
	&Interpreter_t1290_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RepeatContext_t1286_VTable/* vtableMethods */
	, RepeatContext_t1286_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RepeatContext_t1286_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RepeatContext"/* name */
	, ""/* namespaze */
	, RepeatContext_t1286_MethodInfos/* methods */
	, RepeatContext_t1286_PropertyInfos/* properties */
	, RepeatContext_t1286_FieldInfos/* fields */
	, NULL/* events */
	, &RepeatContext_t1286_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RepeatContext_t1286_0_0_0/* byval_arg */
	, &RepeatContext_t1286_1_0_0/* this_arg */
	, &RepeatContext_t1286_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RepeatContext_t1286)/* instance_size */
	, sizeof (RepeatContext_t1286)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern TypeInfo Mode_t1287_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
static MethodInfo* Mode_t1287_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t188_0_0_1542;
FieldInfo Mode_t1287____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t188_0_0_1542/* type */
	, &Mode_t1287_il2cpp_TypeInfo/* parent */
	, offsetof(Mode_t1287, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1287_0_0_32854;
FieldInfo Mode_t1287____Search_2_FieldInfo = 
{
	"Search"/* name */
	, &Mode_t1287_0_0_32854/* type */
	, &Mode_t1287_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1287_0_0_32854;
FieldInfo Mode_t1287____Match_3_FieldInfo = 
{
	"Match"/* name */
	, &Mode_t1287_0_0_32854/* type */
	, &Mode_t1287_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1287_0_0_32854;
FieldInfo Mode_t1287____Count_4_FieldInfo = 
{
	"Count"/* name */
	, &Mode_t1287_0_0_32854/* type */
	, &Mode_t1287_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mode_t1287_FieldInfos[] =
{
	&Mode_t1287____value___1_FieldInfo,
	&Mode_t1287____Search_2_FieldInfo,
	&Mode_t1287____Match_3_FieldInfo,
	&Mode_t1287____Count_4_FieldInfo,
	NULL
};
static const int32_t Mode_t1287____Search_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry Mode_t1287____Search_2_DefaultValue = 
{
	&Mode_t1287____Search_2_FieldInfo/* field */
	, { (char*)&Mode_t1287____Search_2_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t Mode_t1287____Match_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Mode_t1287____Match_3_DefaultValue = 
{
	&Mode_t1287____Match_3_FieldInfo/* field */
	, { (char*)&Mode_t1287____Match_3_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t Mode_t1287____Count_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Mode_t1287____Count_4_DefaultValue = 
{
	&Mode_t1287____Count_4_FieldInfo/* field */
	, { (char*)&Mode_t1287____Count_4_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Mode_t1287_FieldDefaultValues[] = 
{
	&Mode_t1287____Search_2_DefaultValue,
	&Mode_t1287____Match_3_DefaultValue,
	&Mode_t1287____Count_4_DefaultValue,
	NULL
};
static Il2CppMethodReference Mode_t1287_VTable[] =
{
	&Enum_Equals_m1067_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Enum_GetHashCode_m1069_MethodInfo,
	&Enum_ToString_m1070_MethodInfo,
	&Enum_ToString_m1071_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1072_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1073_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1074_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1075_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1076_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1077_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1078_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1079_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1080_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1081_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1082_MethodInfo,
	&Enum_ToString_m1083_MethodInfo,
	&Enum_System_IConvertible_ToType_m1084_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1085_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1086_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1087_MethodInfo,
	&Enum_CompareTo_m1088_MethodInfo,
	&Enum_GetTypeCode_m1089_MethodInfo,
};
static bool Mode_t1287_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Mode_t1287_InterfacesOffsets[] = 
{
	{ &IFormattable_t224_0_0_0, 4},
	{ &IConvertible_t225_0_0_0, 5},
	{ &IComparable_t226_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mode_t1287_0_0_0;
extern Il2CppType Mode_t1287_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t188_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Mode_t1287_DefinitionMetadata = 
{
	&Interpreter_t1290_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Mode_t1287_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t227_0_0_0/* parent */
	, Mode_t1287_VTable/* vtableMethods */
	, Mode_t1287_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mode_t1287_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t1287_MethodInfos/* methods */
	, NULL/* properties */
	, Mode_t1287_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mode_t1287_0_0_0/* byval_arg */
	, &Mode_t1287_1_0_0/* this_arg */
	, &Mode_t1287_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Mode_t1287_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t1287)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mode_t1287)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t1189_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter__ctor_m5678_ParameterInfos[] = 
{
	{"program", 0, 134218362, &EmptyCustomAttributesCache, &UInt16U5BU5D_t1189_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
MethodInfo Interpreter__ctor_m5678_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interpreter__ctor_m5678/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Interpreter_t1290_Interpreter__ctor_m5678_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_ReadProgramCount_m5679_ParameterInfos[] = 
{
	{"ptr", 0, 134218363, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
MethodInfo Interpreter_ReadProgramCount_m5679_MethodInfo = 
{
	"ReadProgramCount"/* name */
	, (methodPointerType)&Interpreter_ReadProgramCount_m5679/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_ReadProgramCount_m5679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t959_0_0_0;
extern Il2CppType Regex_t959_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Scan_m5680_ParameterInfos[] = 
{
	{"regex", 0, 134218364, &EmptyCustomAttributesCache, &Regex_t959_0_0_0},
	{"text", 1, 134218365, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 2, 134218366, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"end", 3, 134218367, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Match_t1251_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
MethodInfo Interpreter_Scan_m5680_MethodInfo = 
{
	"Scan"/* name */
	, (methodPointerType)&Interpreter_Scan_m5680/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1251_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Scan_m5680_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
MethodInfo Interpreter_Reset_m5681_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Interpreter_Reset_m5681/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1287_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Eval_m5682_ParameterInfos[] = 
{
	{"mode", 0, 134218368, &EmptyCustomAttributesCache, &Mode_t1287_0_0_0},
	{"ref_ptr", 1, 134218369, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"pc", 2, 134218370, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188_Int32U26_t597_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
MethodInfo Interpreter_Eval_m5682_MethodInfo = 
{
	"Eval"/* name */
	, (methodPointerType)&Interpreter_Eval_m5682/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188_Int32U26_t597_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Eval_m5682_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1287_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_EvalChar_m5683_ParameterInfos[] = 
{
	{"mode", 0, 134218371, &EmptyCustomAttributesCache, &Mode_t1287_0_0_0},
	{"ptr", 1, 134218372, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"pc", 2, 134218373, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"multi", 3, 134218374, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188_Int32U26_t597_Int32U26_t597_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
MethodInfo Interpreter_EvalChar_m5683_MethodInfo = 
{
	"EvalChar"/* name */
	, (methodPointerType)&Interpreter_EvalChar_m5683/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188_Int32U26_t597_Int32U26_t597_SByte_t232/* invoker_method */
	, Interpreter_t1290_Interpreter_EvalChar_m5683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_TryMatch_m5684_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218375, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"pc", 1, 134218376, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32U26_t597_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
MethodInfo Interpreter_TryMatch_m5684_MethodInfo = 
{
	"TryMatch"/* name */
	, (methodPointerType)&Interpreter_TryMatch_m5684/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32U26_t597_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_TryMatch_m5684_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1271_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_IsPosition_m5685_ParameterInfos[] = 
{
	{"pos", 0, 134218377, &EmptyCustomAttributesCache, &Position_t1271_0_0_0},
	{"ptr", 1, 134218378, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_UInt16_t915_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
MethodInfo Interpreter_IsPosition_m5685_MethodInfo = 
{
	"IsPosition"/* name */
	, (methodPointerType)&Interpreter_IsPosition_m5685/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_UInt16_t915_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_IsPosition_m5685_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_IsWordChar_m5686_ParameterInfos[] = 
{
	{"c", 0, 134218379, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
MethodInfo Interpreter_IsWordChar_m5686_MethodInfo = 
{
	"IsWordChar"/* name */
	, (methodPointerType)&Interpreter_IsWordChar_m5686/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int16_t596/* invoker_method */
	, Interpreter_t1290_Interpreter_IsWordChar_m5686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_GetString_m5687_ParameterInfos[] = 
{
	{"pc", 0, 134218380, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
MethodInfo Interpreter_GetString_m5687_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&Interpreter_GetString_m5687/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_GetString_m5687_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Open_m5688_ParameterInfos[] = 
{
	{"gid", 0, 134218381, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"ptr", 1, 134218382, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
MethodInfo Interpreter_Open_m5688_MethodInfo = 
{
	"Open"/* name */
	, (methodPointerType)&Interpreter_Open_m5688/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Open_m5688_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Close_m5689_ParameterInfos[] = 
{
	{"gid", 0, 134218383, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"ptr", 1, 134218384, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
MethodInfo Interpreter_Close_m5689_MethodInfo = 
{
	"Close"/* name */
	, (methodPointerType)&Interpreter_Close_m5689/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Close_m5689_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Balance_m5690_ParameterInfos[] = 
{
	{"gid", 0, 134218385, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"balance_gid", 1, 134218386, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"capture", 2, 134218387, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ptr", 3, 134218388, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188_Int32_t188_SByte_t232_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo Interpreter_Balance_m5690_MethodInfo = 
{
	"Balance"/* name */
	, (methodPointerType)&Interpreter_Balance_m5690/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188_Int32_t188_SByte_t232_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Balance_m5690_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
MethodInfo Interpreter_Checkpoint_m5691_MethodInfo = 
{
	"Checkpoint"/* name */
	, (methodPointerType)&Interpreter_Checkpoint_m5691/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_Backtrack_m5692_ParameterInfos[] = 
{
	{"cp", 0, 134218389, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
MethodInfo Interpreter_Backtrack_m5692_MethodInfo = 
{
	"Backtrack"/* name */
	, (methodPointerType)&Interpreter_Backtrack_m5692/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_Backtrack_m5692_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
MethodInfo Interpreter_ResetGroups_m5693_MethodInfo = 
{
	"ResetGroups"/* name */
	, (methodPointerType)&Interpreter_ResetGroups_m5693/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_GetLastDefined_m5694_ParameterInfos[] = 
{
	{"gid", 0, 134218390, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
MethodInfo Interpreter_GetLastDefined_m5694_MethodInfo = 
{
	"GetLastDefined"/* name */
	, (methodPointerType)&Interpreter_GetLastDefined_m5694/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_GetLastDefined_m5694_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_CreateMark_m5695_ParameterInfos[] = 
{
	{"previous", 0, 134218391, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
MethodInfo Interpreter_CreateMark_m5695_MethodInfo = 
{
	"CreateMark"/* name */
	, (methodPointerType)&Interpreter_CreateMark_m5695/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_CreateMark_m5695_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Interpreter_t1290_Interpreter_GetGroupInfo_m5696_ParameterInfos[] = 
{
	{"gid", 0, 134218392, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"first_mark_index", 1, 134218393, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"n_caps", 2, 134218394, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
MethodInfo Interpreter_GetGroupInfo_m5696_MethodInfo = 
{
	"GetGroupInfo"/* name */
	, (methodPointerType)&Interpreter_GetGroupInfo_m5696/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Interpreter_t1290_Interpreter_GetGroupInfo_m5696_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1258_0_0_0;
extern Il2CppType Group_t1258_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_PopulateGroup_m5697_ParameterInfos[] = 
{
	{"g", 0, 134218395, &EmptyCustomAttributesCache, &Group_t1258_0_0_0},
	{"first_mark_index", 1, 134218396, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"n_caps", 2, 134218397, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
MethodInfo Interpreter_PopulateGroup_m5697_MethodInfo = 
{
	"PopulateGroup"/* name */
	, (methodPointerType)&Interpreter_PopulateGroup_m5697/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188/* invoker_method */
	, Interpreter_t1290_Interpreter_PopulateGroup_m5697_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t959_0_0_0;
static ParameterInfo Interpreter_t1290_Interpreter_GenerateMatch_m5698_ParameterInfos[] = 
{
	{"regex", 0, 134218398, &EmptyCustomAttributesCache, &Regex_t959_0_0_0},
};
extern Il2CppType Match_t1251_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
MethodInfo Interpreter_GenerateMatch_m5698_MethodInfo = 
{
	"GenerateMatch"/* name */
	, (methodPointerType)&Interpreter_GenerateMatch_m5698/* method */
	, &Interpreter_t1290_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1251_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Interpreter_t1290_Interpreter_GenerateMatch_m5698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interpreter_t1290_MethodInfos[] =
{
	&Interpreter__ctor_m5678_MethodInfo,
	&Interpreter_ReadProgramCount_m5679_MethodInfo,
	&Interpreter_Scan_m5680_MethodInfo,
	&Interpreter_Reset_m5681_MethodInfo,
	&Interpreter_Eval_m5682_MethodInfo,
	&Interpreter_EvalChar_m5683_MethodInfo,
	&Interpreter_TryMatch_m5684_MethodInfo,
	&Interpreter_IsPosition_m5685_MethodInfo,
	&Interpreter_IsWordChar_m5686_MethodInfo,
	&Interpreter_GetString_m5687_MethodInfo,
	&Interpreter_Open_m5688_MethodInfo,
	&Interpreter_Close_m5689_MethodInfo,
	&Interpreter_Balance_m5690_MethodInfo,
	&Interpreter_Checkpoint_m5691_MethodInfo,
	&Interpreter_Backtrack_m5692_MethodInfo,
	&Interpreter_ResetGroups_m5693_MethodInfo,
	&Interpreter_GetLastDefined_m5694_MethodInfo,
	&Interpreter_CreateMark_m5695_MethodInfo,
	&Interpreter_GetGroupInfo_m5696_MethodInfo,
	&Interpreter_PopulateGroup_m5697_MethodInfo,
	&Interpreter_GenerateMatch_m5698_MethodInfo,
	NULL
};
extern Il2CppType UInt16U5BU5D_t1189_0_0_1;
FieldInfo Interpreter_t1290____program_1_FieldInfo = 
{
	"program"/* name */
	, &UInt16U5BU5D_t1189_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___program_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____program_start_2_FieldInfo = 
{
	"program_start"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___program_start_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Interpreter_t1290____text_3_FieldInfo = 
{
	"text"/* name */
	, &String_t_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___text_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____text_end_4_FieldInfo = 
{
	"text_end"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___text_end_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____group_count_5_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___group_count_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____match_min_6_FieldInfo = 
{
	"match_min"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___match_min_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType QuickSearch_t1288_0_0_1;
FieldInfo Interpreter_t1290____qs_7_FieldInfo = 
{
	"qs"/* name */
	, &QuickSearch_t1288_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___qs_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____scan_ptr_8_FieldInfo = 
{
	"scan_ptr"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___scan_ptr_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1286_0_0_1;
FieldInfo Interpreter_t1290____repeat_9_FieldInfo = 
{
	"repeat"/* name */
	, &RepeatContext_t1286_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___repeat_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1286_0_0_1;
FieldInfo Interpreter_t1290____fast_10_FieldInfo = 
{
	"fast"/* name */
	, &RepeatContext_t1286_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___fast_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntStack_t1285_0_0_1;
FieldInfo Interpreter_t1290____stack_11_FieldInfo = 
{
	"stack"/* name */
	, &IntStack_t1285_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___stack_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1286_0_0_1;
FieldInfo Interpreter_t1290____deep_12_FieldInfo = 
{
	"deep"/* name */
	, &RepeatContext_t1286_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___deep_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MarkU5BU5D_t1289_0_0_1;
FieldInfo Interpreter_t1290____marks_13_FieldInfo = 
{
	"marks"/* name */
	, &MarkU5BU5D_t1289_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___marks_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____mark_start_14_FieldInfo = 
{
	"mark_start"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___mark_start_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Interpreter_t1290____mark_end_15_FieldInfo = 
{
	"mark_end"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___mark_end_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32U5BU5D_t1266_0_0_1;
FieldInfo Interpreter_t1290____groups_16_FieldInfo = 
{
	"groups"/* name */
	, &Int32U5BU5D_t1266_0_0_1/* type */
	, &Interpreter_t1290_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1290, ___groups_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interpreter_t1290_FieldInfos[] =
{
	&Interpreter_t1290____program_1_FieldInfo,
	&Interpreter_t1290____program_start_2_FieldInfo,
	&Interpreter_t1290____text_3_FieldInfo,
	&Interpreter_t1290____text_end_4_FieldInfo,
	&Interpreter_t1290____group_count_5_FieldInfo,
	&Interpreter_t1290____match_min_6_FieldInfo,
	&Interpreter_t1290____qs_7_FieldInfo,
	&Interpreter_t1290____scan_ptr_8_FieldInfo,
	&Interpreter_t1290____repeat_9_FieldInfo,
	&Interpreter_t1290____fast_10_FieldInfo,
	&Interpreter_t1290____stack_11_FieldInfo,
	&Interpreter_t1290____deep_12_FieldInfo,
	&Interpreter_t1290____marks_13_FieldInfo,
	&Interpreter_t1290____mark_start_14_FieldInfo,
	&Interpreter_t1290____mark_end_15_FieldInfo,
	&Interpreter_t1290____groups_16_FieldInfo,
	NULL
};
static const Il2CppType* Interpreter_t1290_il2cpp_TypeInfo__nestedTypes[3] =
{
	&IntStack_t1285_0_0_0,
	&RepeatContext_t1286_0_0_0,
	&Mode_t1287_0_0_0,
};
extern MethodInfo Interpreter_Scan_m5680_MethodInfo;
extern MethodInfo BaseMachine_Replace_m5505_MethodInfo;
static Il2CppMethodReference Interpreter_t1290_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Interpreter_Scan_m5680_MethodInfo,
	&BaseMachine_Replace_m5505_MethodInfo,
	&BaseMachine_Replace_m5505_MethodInfo,
	&Interpreter_Scan_m5680_MethodInfo,
};
static bool Interpreter_t1290_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IMachine_t1261_0_0_0;
static Il2CppInterfaceOffsetPair Interpreter_t1290_InterfacesOffsets[] = 
{
	{ &IMachine_t1261_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interpreter_t1290_1_0_0;
extern Il2CppType BaseMachine_t1253_0_0_0;
struct Interpreter_t1290;
const Il2CppTypeDefinitionMetadata Interpreter_t1290_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Interpreter_t1290_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Interpreter_t1290_InterfacesOffsets/* interfaceOffsets */
	, &BaseMachine_t1253_0_0_0/* parent */
	, Interpreter_t1290_VTable/* vtableMethods */
	, Interpreter_t1290_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interpreter_t1290_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interpreter"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interpreter_t1290_MethodInfos/* methods */
	, NULL/* properties */
	, Interpreter_t1290_FieldInfos/* fields */
	, NULL/* events */
	, &Interpreter_t1290_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interpreter_t1290_0_0_0/* byval_arg */
	, &Interpreter_t1290_1_0_0/* this_arg */
	, &Interpreter_t1290_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Interpreter_t1290)/* instance_size */
	, sizeof (Interpreter_t1290)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// Metadata Definition System.Text.RegularExpressions.Interval
extern TypeInfo Interval_t1291_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interval_t1291_Interval__ctor_m5699_ParameterInfos[] = 
{
	{"low", 0, 134218408, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"high", 1, 134218409, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
MethodInfo Interval__ctor_m5699_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interval__ctor_m5699/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188/* invoker_method */
	, Interval_t1291_Interval__ctor_m5699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
extern void* RuntimeInvoker_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
MethodInfo Interval_get_Empty_m5700_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Interval_get_Empty_m5700/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1291/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
MethodInfo Interval_get_IsDiscontiguous_m5701_MethodInfo = 
{
	"get_IsDiscontiguous"/* name */
	, (methodPointerType)&Interval_get_IsDiscontiguous_m5701/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
MethodInfo Interval_get_IsSingleton_m5702_MethodInfo = 
{
	"get_IsSingleton"/* name */
	, (methodPointerType)&Interval_get_IsSingleton_m5702/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
MethodInfo Interval_get_IsEmpty_m5703_MethodInfo = 
{
	"get_IsEmpty"/* name */
	, (methodPointerType)&Interval_get_IsEmpty_m5703/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
MethodInfo Interval_get_Size_m5704_MethodInfo = 
{
	"get_Size"/* name */
	, (methodPointerType)&Interval_get_Size_m5704/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo Interval_t1291_Interval_IsDisjoint_m5705_ParameterInfos[] = 
{
	{"i", 0, 134218410, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsDisjoint_m5705_MethodInfo = 
{
	"IsDisjoint"/* name */
	, (methodPointerType)&Interval_IsDisjoint_m5705/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Interval_t1291/* invoker_method */
	, Interval_t1291_Interval_IsDisjoint_m5705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo Interval_t1291_Interval_IsAdjacent_m5706_ParameterInfos[] = 
{
	{"i", 0, 134218411, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsAdjacent_m5706_MethodInfo = 
{
	"IsAdjacent"/* name */
	, (methodPointerType)&Interval_IsAdjacent_m5706/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Interval_t1291/* invoker_method */
	, Interval_t1291_Interval_IsAdjacent_m5706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo Interval_t1291_Interval_Contains_m5707_ParameterInfos[] = 
{
	{"i", 0, 134218412, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Contains_m5707_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m5707/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Interval_t1291/* invoker_method */
	, Interval_t1291_Interval_Contains_m5707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Interval_t1291_Interval_Contains_m5708_ParameterInfos[] = 
{
	{"i", 0, 134218413, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
MethodInfo Interval_Contains_m5708_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m5708/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Interval_t1291_Interval_Contains_m5708_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo Interval_t1291_Interval_Intersects_m5709_ParameterInfos[] = 
{
	{"i", 0, 134218414, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Intersects_m5709_MethodInfo = 
{
	"Intersects"/* name */
	, (methodPointerType)&Interval_Intersects_m5709/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Interval_t1291/* invoker_method */
	, Interval_t1291_Interval_Intersects_m5709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo Interval_t1291_Interval_Merge_m5710_ParameterInfos[] = 
{
	{"i", 0, 134218415, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Merge_m5710_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Interval_Merge_m5710/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Interval_t1291/* invoker_method */
	, Interval_t1291_Interval_Merge_m5710_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Interval_t1291_Interval_CompareTo_m5711_ParameterInfos[] = 
{
	{"o", 0, 134218416, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
MethodInfo Interval_CompareTo_m5711_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Interval_CompareTo_m5711/* method */
	, &Interval_t1291_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t/* invoker_method */
	, Interval_t1291_Interval_CompareTo_m5711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interval_t1291_MethodInfos[] =
{
	&Interval__ctor_m5699_MethodInfo,
	&Interval_get_Empty_m5700_MethodInfo,
	&Interval_get_IsDiscontiguous_m5701_MethodInfo,
	&Interval_get_IsSingleton_m5702_MethodInfo,
	&Interval_get_IsEmpty_m5703_MethodInfo,
	&Interval_get_Size_m5704_MethodInfo,
	&Interval_IsDisjoint_m5705_MethodInfo,
	&Interval_IsAdjacent_m5706_MethodInfo,
	&Interval_Contains_m5707_MethodInfo,
	&Interval_Contains_m5708_MethodInfo,
	&Interval_Intersects_m5709_MethodInfo,
	&Interval_Merge_m5710_MethodInfo,
	&Interval_CompareTo_m5711_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Interval_t1291____low_0_FieldInfo = 
{
	"low"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Interval_t1291_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1291, ___low_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo Interval_t1291____high_1_FieldInfo = 
{
	"high"/* name */
	, &Int32_t188_0_0_6/* type */
	, &Interval_t1291_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1291, ___high_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_6;
FieldInfo Interval_t1291____contiguous_2_FieldInfo = 
{
	"contiguous"/* name */
	, &Boolean_t202_0_0_6/* type */
	, &Interval_t1291_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1291, ___contiguous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interval_t1291_FieldInfos[] =
{
	&Interval_t1291____low_0_FieldInfo,
	&Interval_t1291____high_1_FieldInfo,
	&Interval_t1291____contiguous_2_FieldInfo,
	NULL
};
extern MethodInfo Interval_get_Empty_m5700_MethodInfo;
static PropertyInfo Interval_t1291____Empty_PropertyInfo = 
{
	&Interval_t1291_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Interval_get_Empty_m5700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsDiscontiguous_m5701_MethodInfo;
static PropertyInfo Interval_t1291____IsDiscontiguous_PropertyInfo = 
{
	&Interval_t1291_il2cpp_TypeInfo/* parent */
	, "IsDiscontiguous"/* name */
	, &Interval_get_IsDiscontiguous_m5701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsSingleton_m5702_MethodInfo;
static PropertyInfo Interval_t1291____IsSingleton_PropertyInfo = 
{
	&Interval_t1291_il2cpp_TypeInfo/* parent */
	, "IsSingleton"/* name */
	, &Interval_get_IsSingleton_m5702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsEmpty_m5703_MethodInfo;
static PropertyInfo Interval_t1291____IsEmpty_PropertyInfo = 
{
	&Interval_t1291_il2cpp_TypeInfo/* parent */
	, "IsEmpty"/* name */
	, &Interval_get_IsEmpty_m5703_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_Size_m5704_MethodInfo;
static PropertyInfo Interval_t1291____Size_PropertyInfo = 
{
	&Interval_t1291_il2cpp_TypeInfo/* parent */
	, "Size"/* name */
	, &Interval_get_Size_m5704_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Interval_t1291_PropertyInfos[] =
{
	&Interval_t1291____Empty_PropertyInfo,
	&Interval_t1291____IsDiscontiguous_PropertyInfo,
	&Interval_t1291____IsSingleton_PropertyInfo,
	&Interval_t1291____IsEmpty_PropertyInfo,
	&Interval_t1291____Size_PropertyInfo,
	NULL
};
extern MethodInfo Interval_CompareTo_m5711_MethodInfo;
static Il2CppMethodReference Interval_t1291_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
	&Interval_CompareTo_m5711_MethodInfo,
};
static bool Interval_t1291_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Interval_t1291_InterfacesTypeInfos[] = 
{
	&IComparable_t226_0_0_0,
};
static Il2CppInterfaceOffsetPair Interval_t1291_InterfacesOffsets[] = 
{
	{ &IComparable_t226_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interval_t1291_1_0_0;
const Il2CppTypeDefinitionMetadata Interval_t1291_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Interval_t1291_InterfacesTypeInfos/* implementedInterfaces */
	, Interval_t1291_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, Interval_t1291_VTable/* vtableMethods */
	, Interval_t1291_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interval_t1291_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interval"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interval_t1291_MethodInfos/* methods */
	, Interval_t1291_PropertyInfos/* properties */
	, Interval_t1291_FieldInfos/* fields */
	, NULL/* events */
	, &Interval_t1291_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interval_t1291_0_0_0/* byval_arg */
	, &Interval_t1291_1_0_0/* this_arg */
	, &Interval_t1291_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)Interval_t1291_marshal/* marshal_to_native_func */
	, (methodPointerType)Interval_t1291_marshal_back/* marshal_from_native_func */
	, (methodPointerType)Interval_t1291_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (Interval_t1291)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Interval_t1291)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Interval_t1291_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 13/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern TypeInfo Enumerator_t1292_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern Il2CppType IList_t1031_0_0_0;
extern Il2CppType IList_t1031_0_0_0;
static ParameterInfo Enumerator_t1292_Enumerator__ctor_m5712_ParameterInfos[] = 
{
	{"list", 0, 134218426, &EmptyCustomAttributesCache, &IList_t1031_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
MethodInfo Enumerator__ctor_m5712_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Enumerator__ctor_m5712/* method */
	, &Enumerator_t1292_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Enumerator_t1292_Enumerator__ctor_m5712_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
MethodInfo Enumerator_get_Current_m5713_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&Enumerator_get_Current_m5713/* method */
	, &Enumerator_t1292_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
MethodInfo Enumerator_MoveNext_m5714_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&Enumerator_MoveNext_m5714/* method */
	, &Enumerator_t1292_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
MethodInfo Enumerator_Reset_m5715_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Enumerator_Reset_m5715/* method */
	, &Enumerator_t1292_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Enumerator_t1292_MethodInfos[] =
{
	&Enumerator__ctor_m5712_MethodInfo,
	&Enumerator_get_Current_m5713_MethodInfo,
	&Enumerator_MoveNext_m5714_MethodInfo,
	&Enumerator_Reset_m5715_MethodInfo,
	NULL
};
extern Il2CppType IList_t1031_0_0_1;
FieldInfo Enumerator_t1292____list_0_FieldInfo = 
{
	"list"/* name */
	, &IList_t1031_0_0_1/* type */
	, &Enumerator_t1292_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1292, ___list_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Enumerator_t1292____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Enumerator_t1292_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1292, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Enumerator_t1292_FieldInfos[] =
{
	&Enumerator_t1292____list_0_FieldInfo,
	&Enumerator_t1292____ptr_1_FieldInfo,
	NULL
};
extern MethodInfo Enumerator_get_Current_m5713_MethodInfo;
static PropertyInfo Enumerator_t1292____Current_PropertyInfo = 
{
	&Enumerator_t1292_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &Enumerator_get_Current_m5713_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Enumerator_t1292_PropertyInfos[] =
{
	&Enumerator_t1292____Current_PropertyInfo,
	NULL
};
extern MethodInfo Enumerator_MoveNext_m5714_MethodInfo;
extern MethodInfo Enumerator_Reset_m5715_MethodInfo;
static Il2CppMethodReference Enumerator_t1292_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Enumerator_get_Current_m5713_MethodInfo,
	&Enumerator_MoveNext_m5714_MethodInfo,
	&Enumerator_Reset_m5715_MethodInfo,
};
static bool Enumerator_t1292_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IEnumerator_t106_0_0_0;
static const Il2CppType* Enumerator_t1292_InterfacesTypeInfos[] = 
{
	&IEnumerator_t106_0_0_0,
};
static Il2CppInterfaceOffsetPair Enumerator_t1292_InterfacesOffsets[] = 
{
	{ &IEnumerator_t106_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Enumerator_t1292_0_0_0;
extern Il2CppType Enumerator_t1292_1_0_0;
extern TypeInfo IntervalCollection_t1294_il2cpp_TypeInfo;
extern Il2CppType IntervalCollection_t1294_0_0_0;
struct Enumerator_t1292;
const Il2CppTypeDefinitionMetadata Enumerator_t1292_DefinitionMetadata = 
{
	&IntervalCollection_t1294_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, Enumerator_t1292_InterfacesTypeInfos/* implementedInterfaces */
	, Enumerator_t1292_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Enumerator_t1292_VTable/* vtableMethods */
	, Enumerator_t1292_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Enumerator_t1292_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Enumerator"/* name */
	, ""/* namespaze */
	, Enumerator_t1292_MethodInfos/* methods */
	, Enumerator_t1292_PropertyInfos/* properties */
	, Enumerator_t1292_FieldInfos/* fields */
	, NULL/* events */
	, &Enumerator_t1292_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Enumerator_t1292_0_0_0/* byval_arg */
	, &Enumerator_t1292_1_0_0/* this_arg */
	, &Enumerator_t1292_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Enumerator_t1292)/* instance_size */
	, sizeof (Enumerator_t1292)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern TypeInfo CostDelegate_t1293_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo CostDelegate_t1293_CostDelegate__ctor_m5716_ParameterInfos[] = 
{
	{"object", 0, 134218427, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218428, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
MethodInfo CostDelegate__ctor_m5716_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CostDelegate__ctor_m5716/* method */
	, &CostDelegate_t1293_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_IntPtr_t/* invoker_method */
	, CostDelegate_t1293_CostDelegate__ctor_m5716_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo CostDelegate_t1293_CostDelegate_Invoke_m5717_ParameterInfos[] = 
{
	{"i", 0, 134218429, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Double_t923_0_0_0;
extern void* RuntimeInvoker_Double_t923_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
MethodInfo CostDelegate_Invoke_m5717_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CostDelegate_Invoke_m5717/* method */
	, &CostDelegate_t1293_il2cpp_TypeInfo/* declaring_type */
	, &Double_t923_0_0_0/* return_type */
	, RuntimeInvoker_Double_t923_Interval_t1291/* invoker_method */
	, CostDelegate_t1293_CostDelegate_Invoke_m5717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
extern Il2CppType AsyncCallback_t426_0_0_0;
extern Il2CppType AsyncCallback_t426_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CostDelegate_t1293_CostDelegate_BeginInvoke_m5718_ParameterInfos[] = 
{
	{"i", 0, 134218430, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
	{"callback", 1, 134218431, &EmptyCustomAttributesCache, &AsyncCallback_t426_0_0_0},
	{"object", 2, 134218432, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t425_0_0_0;
extern void* RuntimeInvoker_Object_t_Interval_t1291_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
MethodInfo CostDelegate_BeginInvoke_m5718_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CostDelegate_BeginInvoke_m5718/* method */
	, &CostDelegate_t1293_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t425_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Interval_t1291_Object_t_Object_t/* invoker_method */
	, CostDelegate_t1293_CostDelegate_BeginInvoke_m5718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t425_0_0_0;
extern Il2CppType IAsyncResult_t425_0_0_0;
static ParameterInfo CostDelegate_t1293_CostDelegate_EndInvoke_m5719_ParameterInfos[] = 
{
	{"result", 0, 134218433, &EmptyCustomAttributesCache, &IAsyncResult_t425_0_0_0},
};
extern Il2CppType Double_t923_0_0_0;
extern void* RuntimeInvoker_Double_t923_Object_t (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
MethodInfo CostDelegate_EndInvoke_m5719_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CostDelegate_EndInvoke_m5719/* method */
	, &CostDelegate_t1293_il2cpp_TypeInfo/* declaring_type */
	, &Double_t923_0_0_0/* return_type */
	, RuntimeInvoker_Double_t923_Object_t/* invoker_method */
	, CostDelegate_t1293_CostDelegate_EndInvoke_m5719_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CostDelegate_t1293_MethodInfos[] =
{
	&CostDelegate__ctor_m5716_MethodInfo,
	&CostDelegate_Invoke_m5717_MethodInfo,
	&CostDelegate_BeginInvoke_m5718_MethodInfo,
	&CostDelegate_EndInvoke_m5719_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3111_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3112_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3113_MethodInfo;
extern MethodInfo Delegate_Clone_m3114_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3115_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3116_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3117_MethodInfo;
extern MethodInfo CostDelegate_Invoke_m5717_MethodInfo;
extern MethodInfo CostDelegate_BeginInvoke_m5718_MethodInfo;
extern MethodInfo CostDelegate_EndInvoke_m5719_MethodInfo;
static Il2CppMethodReference CostDelegate_t1293_VTable[] =
{
	&MulticastDelegate_Equals_m3111_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&MulticastDelegate_GetHashCode_m3112_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&Delegate_Clone_m3114_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3115_MethodInfo,
	&MulticastDelegate_CombineImpl_m3116_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3117_MethodInfo,
	&CostDelegate_Invoke_m5717_MethodInfo,
	&CostDelegate_BeginInvoke_m5718_MethodInfo,
	&CostDelegate_EndInvoke_m5719_MethodInfo,
};
static bool CostDelegate_t1293_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICloneable_t572_0_0_0;
extern Il2CppType ISerializable_t573_0_0_0;
static Il2CppInterfaceOffsetPair CostDelegate_t1293_InterfacesOffsets[] = 
{
	{ &ICloneable_t572_0_0_0, 4},
	{ &ISerializable_t573_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CostDelegate_t1293_0_0_0;
extern Il2CppType CostDelegate_t1293_1_0_0;
extern Il2CppType MulticastDelegate_t429_0_0_0;
struct CostDelegate_t1293;
const Il2CppTypeDefinitionMetadata CostDelegate_t1293_DefinitionMetadata = 
{
	&IntervalCollection_t1294_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CostDelegate_t1293_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t429_0_0_0/* parent */
	, CostDelegate_t1293_VTable/* vtableMethods */
	, CostDelegate_t1293_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CostDelegate_t1293_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CostDelegate"/* name */
	, ""/* namespaze */
	, CostDelegate_t1293_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CostDelegate_t1293_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CostDelegate_t1293_0_0_0/* byval_arg */
	, &CostDelegate_t1293_1_0_0/* this_arg */
	, &CostDelegate_t1293_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CostDelegate_t1293/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CostDelegate_t1293)/* instance_size */
	, sizeof (CostDelegate_t1293)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
MethodInfo IntervalCollection__ctor_m5720_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IntervalCollection__ctor_m5720/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo IntervalCollection_t1294_IntervalCollection_get_Item_m5721_ParameterInfos[] = 
{
	{"i", 0, 134218417, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Interval_t1291_0_0_0;
extern void* RuntimeInvoker_Interval_t1291_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
MethodInfo IntervalCollection_get_Item_m5721_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&IntervalCollection_get_Item_m5721/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1291_Int32_t188/* invoker_method */
	, IntervalCollection_t1294_IntervalCollection_get_Item_m5721_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo IntervalCollection_t1294_IntervalCollection_Add_m5722_ParameterInfos[] = 
{
	{"i", 0, 134218418, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
MethodInfo IntervalCollection_Add_m5722_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&IntervalCollection_Add_m5722/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Interval_t1291/* invoker_method */
	, IntervalCollection_t1294_IntervalCollection_Add_m5722_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
MethodInfo IntervalCollection_Normalize_m5723_MethodInfo = 
{
	"Normalize"/* name */
	, (methodPointerType)&IntervalCollection_Normalize_m5723/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CostDelegate_t1293_0_0_0;
static ParameterInfo IntervalCollection_t1294_IntervalCollection_GetMetaCollection_m5724_ParameterInfos[] = 
{
	{"cost_del", 0, 134218419, &EmptyCustomAttributesCache, &CostDelegate_t1293_0_0_0},
};
extern Il2CppType IntervalCollection_t1294_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_GetMetaCollection_m5724_MethodInfo = 
{
	"GetMetaCollection"/* name */
	, (methodPointerType)&IntervalCollection_GetMetaCollection_m5724/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &IntervalCollection_t1294_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1294_IntervalCollection_GetMetaCollection_m5724_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType IntervalCollection_t1294_0_0_0;
extern Il2CppType CostDelegate_t1293_0_0_0;
static ParameterInfo IntervalCollection_t1294_IntervalCollection_Optimize_m5725_ParameterInfos[] = 
{
	{"begin", 0, 134218420, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"end", 1, 134218421, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"meta", 2, 134218422, &EmptyCustomAttributesCache, &IntervalCollection_t1294_0_0_0},
	{"cost_del", 3, 134218423, &EmptyCustomAttributesCache, &CostDelegate_t1293_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_Optimize_m5725_MethodInfo = 
{
	"Optimize"/* name */
	, (methodPointerType)&IntervalCollection_Optimize_m5725/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1294_IntervalCollection_Optimize_m5725_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
MethodInfo IntervalCollection_get_Count_m5726_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntervalCollection_get_Count_m5726/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
MethodInfo IntervalCollection_get_IsSynchronized_m5727_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&IntervalCollection_get_IsSynchronized_m5727/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
MethodInfo IntervalCollection_get_SyncRoot_m5728_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&IntervalCollection_get_SyncRoot_m5728/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo IntervalCollection_t1294_IntervalCollection_CopyTo_m5729_ParameterInfos[] = 
{
	{"array", 0, 134218424, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"index", 1, 134218425, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
MethodInfo IntervalCollection_CopyTo_m5729_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&IntervalCollection_CopyTo_m5729/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188/* invoker_method */
	, IntervalCollection_t1294_IntervalCollection_CopyTo_m5729_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t106_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
MethodInfo IntervalCollection_GetEnumerator_m5730_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&IntervalCollection_GetEnumerator_m5730/* method */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t106_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntervalCollection_t1294_MethodInfos[] =
{
	&IntervalCollection__ctor_m5720_MethodInfo,
	&IntervalCollection_get_Item_m5721_MethodInfo,
	&IntervalCollection_Add_m5722_MethodInfo,
	&IntervalCollection_Normalize_m5723_MethodInfo,
	&IntervalCollection_GetMetaCollection_m5724_MethodInfo,
	&IntervalCollection_Optimize_m5725_MethodInfo,
	&IntervalCollection_get_Count_m5726_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m5727_MethodInfo,
	&IntervalCollection_get_SyncRoot_m5728_MethodInfo,
	&IntervalCollection_CopyTo_m5729_MethodInfo,
	&IntervalCollection_GetEnumerator_m5730_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t1161_0_0_1;
FieldInfo IntervalCollection_t1294____intervals_0_FieldInfo = 
{
	"intervals"/* name */
	, &ArrayList_t1161_0_0_1/* type */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* parent */
	, offsetof(IntervalCollection_t1294, ___intervals_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntervalCollection_t1294_FieldInfos[] =
{
	&IntervalCollection_t1294____intervals_0_FieldInfo,
	NULL
};
extern MethodInfo IntervalCollection_get_Item_m5721_MethodInfo;
static PropertyInfo IntervalCollection_t1294____Item_PropertyInfo = 
{
	&IntervalCollection_t1294_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IntervalCollection_get_Item_m5721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_Count_m5726_MethodInfo;
static PropertyInfo IntervalCollection_t1294____Count_PropertyInfo = 
{
	&IntervalCollection_t1294_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntervalCollection_get_Count_m5726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_IsSynchronized_m5727_MethodInfo;
static PropertyInfo IntervalCollection_t1294____IsSynchronized_PropertyInfo = 
{
	&IntervalCollection_t1294_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &IntervalCollection_get_IsSynchronized_m5727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_SyncRoot_m5728_MethodInfo;
static PropertyInfo IntervalCollection_t1294____SyncRoot_PropertyInfo = 
{
	&IntervalCollection_t1294_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &IntervalCollection_get_SyncRoot_m5728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntervalCollection_t1294_PropertyInfos[] =
{
	&IntervalCollection_t1294____Item_PropertyInfo,
	&IntervalCollection_t1294____Count_PropertyInfo,
	&IntervalCollection_t1294____IsSynchronized_PropertyInfo,
	&IntervalCollection_t1294____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* IntervalCollection_t1294_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Enumerator_t1292_0_0_0,
	&CostDelegate_t1293_0_0_0,
};
extern MethodInfo IntervalCollection_CopyTo_m5729_MethodInfo;
extern MethodInfo IntervalCollection_GetEnumerator_m5730_MethodInfo;
static Il2CppMethodReference IntervalCollection_t1294_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&IntervalCollection_get_Count_m5726_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m5727_MethodInfo,
	&IntervalCollection_get_SyncRoot_m5728_MethodInfo,
	&IntervalCollection_CopyTo_m5729_MethodInfo,
	&IntervalCollection_GetEnumerator_m5730_MethodInfo,
};
static bool IntervalCollection_t1294_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICollection_t1030_0_0_0;
extern Il2CppType IEnumerable_t620_0_0_0;
static const Il2CppType* IntervalCollection_t1294_InterfacesTypeInfos[] = 
{
	&ICollection_t1030_0_0_0,
	&IEnumerable_t620_0_0_0,
};
static Il2CppInterfaceOffsetPair IntervalCollection_t1294_InterfacesOffsets[] = 
{
	{ &ICollection_t1030_0_0_0, 4},
	{ &IEnumerable_t620_0_0_0, 8},
};
extern TypeInfo DefaultMemberAttribute_t621_il2cpp_TypeInfo;
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern MethodInfo DefaultMemberAttribute__ctor_m3209_MethodInfo;
void IntervalCollection_t1294_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t621 * tmp;
		tmp = (DefaultMemberAttribute_t621 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t621_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m3209(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m3209_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache IntervalCollection_t1294__CustomAttributeCache = {
1,
NULL,
&IntervalCollection_t1294_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntervalCollection_t1294_1_0_0;
struct IntervalCollection_t1294;
extern CustomAttributesCache IntervalCollection_t1294__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata IntervalCollection_t1294_DefinitionMetadata = 
{
	NULL/* declaringType */
	, IntervalCollection_t1294_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, IntervalCollection_t1294_InterfacesTypeInfos/* implementedInterfaces */
	, IntervalCollection_t1294_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, IntervalCollection_t1294_VTable/* vtableMethods */
	, IntervalCollection_t1294_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntervalCollection_t1294_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntervalCollection"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IntervalCollection_t1294_MethodInfos/* methods */
	, IntervalCollection_t1294_PropertyInfos/* properties */
	, IntervalCollection_t1294_FieldInfos/* fields */
	, NULL/* events */
	, &IntervalCollection_t1294_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &IntervalCollection_t1294__CustomAttributeCache/* custom_attributes_cache */
	, &IntervalCollection_t1294_0_0_0/* byval_arg */
	, &IntervalCollection_t1294_1_0_0/* this_arg */
	, &IntervalCollection_t1294_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IntervalCollection_t1294)/* instance_size */
	, sizeof (IntervalCollection_t1294)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 4/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern TypeInfo Parser_t1295_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
MethodInfo Parser__ctor_m5731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Parser__ctor_m5731/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
static ParameterInfo Parser_t1295_Parser_ParseDecimal_m5732_ParameterInfos[] = 
{
	{"str", 0, 134218434, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218435, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
MethodInfo Parser_ParseDecimal_m5732_MethodInfo = 
{
	"ParseDecimal"/* name */
	, (methodPointerType)&Parser_ParseDecimal_m5732/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597/* invoker_method */
	, Parser_t1295_Parser_ParseDecimal_m5732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
static ParameterInfo Parser_t1295_Parser_ParseOctal_m5733_ParameterInfos[] = 
{
	{"str", 0, 134218436, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218437, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
MethodInfo Parser_ParseOctal_m5733_MethodInfo = 
{
	"ParseOctal"/* name */
	, (methodPointerType)&Parser_ParseOctal_m5733/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597/* invoker_method */
	, Parser_t1295_Parser_ParseOctal_m5733_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseHex_m5734_ParameterInfos[] = 
{
	{"str", 0, 134218438, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218439, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"digits", 2, 134218440, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
MethodInfo Parser_ParseHex_m5734_MethodInfo = 
{
	"ParseHex"/* name */
	, (methodPointerType)&Parser_ParseHex_m5734/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseHex_m5734_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseNumber_m5735_ParameterInfos[] = 
{
	{"str", 0, 134218441, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218442, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"b", 2, 134218443, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"min", 3, 134218444, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 4, 134218445, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597_Int32_t188_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m5735_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m5735/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t_Int32U26_t597_Int32_t188_Int32_t188_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseNumber_m5735_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
static ParameterInfo Parser_t1295_Parser_ParseName_m5736_ParameterInfos[] = 
{
	{"str", 0, 134218446, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218447, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
MethodInfo Parser_ParseName_m5736_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m5736/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t597/* invoker_method */
	, Parser_t1295_Parser_ParseName_m5736_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseRegularExpression_m5737_ParameterInfos[] = 
{
	{"pattern", 0, 134218448, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218449, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType RegularExpression_t1296_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRegularExpression_m5737_MethodInfo = 
{
	"ParseRegularExpression"/* name */
	, (methodPointerType)&Parser_ParseRegularExpression_m5737/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &RegularExpression_t1296_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseRegularExpression_m5737_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t1149_0_0_0;
extern Il2CppType Hashtable_t1149_0_0_0;
static ParameterInfo Parser_t1295_Parser_GetMapping_m5738_ParameterInfos[] = 
{
	{"mapping", 0, 134218450, &EmptyCustomAttributesCache, &Hashtable_t1149_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
MethodInfo Parser_GetMapping_m5738_MethodInfo = 
{
	"GetMapping"/* name */
	, (methodPointerType)&Parser_GetMapping_m5738/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t/* invoker_method */
	, Parser_t1295_Parser_GetMapping_m5738_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1297_0_0_0;
extern Il2CppType Group_t1297_0_0_0;
extern Il2CppType RegexOptions_t1268_0_0_0;
extern Il2CppType Assertion_t1298_0_0_0;
extern Il2CppType Assertion_t1298_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseGroup_m5739_ParameterInfos[] = 
{
	{"group", 0, 134218451, &EmptyCustomAttributesCache, &Group_t1297_0_0_0},
	{"options", 1, 134218452, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
	{"assertion", 2, 134218453, &EmptyCustomAttributesCache, &Assertion_t1298_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
MethodInfo Parser_ParseGroup_m5739_MethodInfo = 
{
	"ParseGroup"/* name */
	, (methodPointerType)&Parser_ParseGroup_m5739/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Object_t/* invoker_method */
	, Parser_t1295_Parser_ParseGroup_m5739_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_1_0_0;
extern Il2CppType RegexOptions_t1268_1_0_0;
static ParameterInfo Parser_t1295_Parser_ParseGroupingConstruct_m5740_ParameterInfos[] = 
{
	{"options", 0, 134218454, &EmptyCustomAttributesCache, &RegexOptions_t1268_1_0_0},
};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t_RegexOptionsU26_t1375 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
MethodInfo Parser_ParseGroupingConstruct_m5740_MethodInfo = 
{
	"ParseGroupingConstruct"/* name */
	, (methodPointerType)&Parser_ParseGroupingConstruct_m5740/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_RegexOptionsU26_t1375/* invoker_method */
	, Parser_t1295_Parser_ParseGroupingConstruct_m5740_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1300_0_0_0;
extern Il2CppType ExpressionAssertion_t1300_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseAssertionType_m5741_ParameterInfos[] = 
{
	{"assertion", 0, 134218455, &EmptyCustomAttributesCache, &ExpressionAssertion_t1300_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
MethodInfo Parser_ParseAssertionType_m5741_MethodInfo = 
{
	"ParseAssertionType"/* name */
	, (methodPointerType)&Parser_ParseAssertionType_m5741/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Parser_t1295_Parser_ParseAssertionType_m5741_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_1_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseOptions_m5742_ParameterInfos[] = 
{
	{"options", 0, 134218456, &EmptyCustomAttributesCache, &RegexOptions_t1268_1_0_0},
	{"negate", 1, 134218457, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_RegexOptionsU26_t1375_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
MethodInfo Parser_ParseOptions_m5742_MethodInfo = 
{
	"ParseOptions"/* name */
	, (methodPointerType)&Parser_ParseOptions_m5742/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_RegexOptionsU26_t1375_SByte_t232/* invoker_method */
	, Parser_t1295_Parser_ParseOptions_m5742_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseCharacterClass_m5743_ParameterInfos[] = 
{
	{"options", 0, 134218458, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseCharacterClass_m5743_MethodInfo = 
{
	"ParseCharacterClass"/* name */
	, (methodPointerType)&Parser_ParseCharacterClass_m5743/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseCharacterClass_m5743_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseRepetitionBounds_m5744_ParameterInfos[] = 
{
	{"min", 0, 134218459, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218460, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"options", 2, 134218461, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32U26_t597_Int32U26_t597_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRepetitionBounds_m5744_MethodInfo = 
{
	"ParseRepetitionBounds"/* name */
	, (methodPointerType)&Parser_ParseRepetitionBounds_m5744/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32U26_t597_Int32U26_t597_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseRepetitionBounds_m5744_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern void* RuntimeInvoker_Category_t1275 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
MethodInfo Parser_ParseUnicodeCategory_m5745_MethodInfo = 
{
	"ParseUnicodeCategory"/* name */
	, (methodPointerType)&Parser_ParseUnicodeCategory_m5745/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1275_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1275/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseSpecial_m5746_ParameterInfos[] = 
{
	{"options", 0, 134218462, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseSpecial_m5746_MethodInfo = 
{
	"ParseSpecial"/* name */
	, (methodPointerType)&Parser_ParseSpecial_m5746/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseSpecial_m5746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
MethodInfo Parser_ParseEscape_m5747_MethodInfo = 
{
	"ParseEscape"/* name */
	, (methodPointerType)&Parser_ParseEscape_m5747/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
MethodInfo Parser_ParseName_m5748_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m5748/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsNameChar_m5749_ParameterInfos[] = 
{
	{"c", 0, 134218463, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
MethodInfo Parser_IsNameChar_m5749_MethodInfo = 
{
	"IsNameChar"/* name */
	, (methodPointerType)&Parser_IsNameChar_m5749/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int16_t596/* invoker_method */
	, Parser_t1295_Parser_IsNameChar_m5749_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseNumber_m5750_ParameterInfos[] = 
{
	{"b", 0, 134218464, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"min", 1, 134218465, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 2, 134218466, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32_t188_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m5750_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m5750/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32_t188_Int32_t188_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseNumber_m5750_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Parser_t1295_Parser_ParseDigit_m5751_ParameterInfos[] = 
{
	{"c", 0, 134218467, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"b", 1, 134218468, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"n", 2, 134218469, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int16_t596_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
MethodInfo Parser_ParseDigit_m5751_MethodInfo = 
{
	"ParseDigit"/* name */
	, (methodPointerType)&Parser_ParseDigit_m5751/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int16_t596_Int32_t188_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_ParseDigit_m5751_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Parser_t1295_Parser_ConsumeWhitespace_m5752_ParameterInfos[] = 
{
	{"ignore", 0, 134218470, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
MethodInfo Parser_ConsumeWhitespace_m5752_MethodInfo = 
{
	"ConsumeWhitespace"/* name */
	, (methodPointerType)&Parser_ConsumeWhitespace_m5752/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232/* invoker_method */
	, Parser_t1295_Parser_ConsumeWhitespace_m5752_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
MethodInfo Parser_ResolveReferences_m5753_MethodInfo = 
{
	"ResolveReferences"/* name */
	, (methodPointerType)&Parser_ResolveReferences_m5753/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ArrayList_t1161_0_0_0;
extern Il2CppType ArrayList_t1161_0_0_0;
static ParameterInfo Parser_t1295_Parser_HandleExplicitNumericGroups_m5754_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218471, &EmptyCustomAttributesCache, &ArrayList_t1161_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
MethodInfo Parser_HandleExplicitNumericGroups_m5754_MethodInfo = 
{
	"HandleExplicitNumericGroups"/* name */
	, (methodPointerType)&Parser_HandleExplicitNumericGroups_m5754/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Parser_t1295_Parser_HandleExplicitNumericGroups_m5754_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsIgnoreCase_m5755_ParameterInfos[] = 
{
	{"options", 0, 134218472, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnoreCase_m5755_MethodInfo = 
{
	"IsIgnoreCase"/* name */
	, (methodPointerType)&Parser_IsIgnoreCase_m5755/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsIgnoreCase_m5755_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsMultiline_m5756_ParameterInfos[] = 
{
	{"options", 0, 134218473, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsMultiline_m5756_MethodInfo = 
{
	"IsMultiline"/* name */
	, (methodPointerType)&Parser_IsMultiline_m5756/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsMultiline_m5756_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsExplicitCapture_m5757_ParameterInfos[] = 
{
	{"options", 0, 134218474, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsExplicitCapture_m5757_MethodInfo = 
{
	"IsExplicitCapture"/* name */
	, (methodPointerType)&Parser_IsExplicitCapture_m5757/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsExplicitCapture_m5757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsSingleline_m5758_ParameterInfos[] = 
{
	{"options", 0, 134218475, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsSingleline_m5758_MethodInfo = 
{
	"IsSingleline"/* name */
	, (methodPointerType)&Parser_IsSingleline_m5758/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsSingleline_m5758_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsIgnorePatternWhitespace_m5759_ParameterInfos[] = 
{
	{"options", 0, 134218476, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnorePatternWhitespace_m5759_MethodInfo = 
{
	"IsIgnorePatternWhitespace"/* name */
	, (methodPointerType)&Parser_IsIgnorePatternWhitespace_m5759/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsIgnorePatternWhitespace_m5759_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1268_0_0_0;
static ParameterInfo Parser_t1295_Parser_IsECMAScript_m5760_ParameterInfos[] = 
{
	{"options", 0, 134218477, &EmptyCustomAttributesCache, &RegexOptions_t1268_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsECMAScript_m5760_MethodInfo = 
{
	"IsECMAScript"/* name */
	, (methodPointerType)&Parser_IsECMAScript_m5760/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int32_t188/* invoker_method */
	, Parser_t1295_Parser_IsECMAScript_m5760_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Parser_t1295_Parser_NewParseException_m5761_ParameterInfos[] = 
{
	{"msg", 0, 134218478, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType ArgumentException_t555_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
MethodInfo Parser_NewParseException_m5761_MethodInfo = 
{
	"NewParseException"/* name */
	, (methodPointerType)&Parser_NewParseException_m5761/* method */
	, &Parser_t1295_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentException_t555_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Parser_t1295_Parser_NewParseException_m5761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Parser_t1295_MethodInfos[] =
{
	&Parser__ctor_m5731_MethodInfo,
	&Parser_ParseDecimal_m5732_MethodInfo,
	&Parser_ParseOctal_m5733_MethodInfo,
	&Parser_ParseHex_m5734_MethodInfo,
	&Parser_ParseNumber_m5735_MethodInfo,
	&Parser_ParseName_m5736_MethodInfo,
	&Parser_ParseRegularExpression_m5737_MethodInfo,
	&Parser_GetMapping_m5738_MethodInfo,
	&Parser_ParseGroup_m5739_MethodInfo,
	&Parser_ParseGroupingConstruct_m5740_MethodInfo,
	&Parser_ParseAssertionType_m5741_MethodInfo,
	&Parser_ParseOptions_m5742_MethodInfo,
	&Parser_ParseCharacterClass_m5743_MethodInfo,
	&Parser_ParseRepetitionBounds_m5744_MethodInfo,
	&Parser_ParseUnicodeCategory_m5745_MethodInfo,
	&Parser_ParseSpecial_m5746_MethodInfo,
	&Parser_ParseEscape_m5747_MethodInfo,
	&Parser_ParseName_m5748_MethodInfo,
	&Parser_IsNameChar_m5749_MethodInfo,
	&Parser_ParseNumber_m5750_MethodInfo,
	&Parser_ParseDigit_m5751_MethodInfo,
	&Parser_ConsumeWhitespace_m5752_MethodInfo,
	&Parser_ResolveReferences_m5753_MethodInfo,
	&Parser_HandleExplicitNumericGroups_m5754_MethodInfo,
	&Parser_IsIgnoreCase_m5755_MethodInfo,
	&Parser_IsMultiline_m5756_MethodInfo,
	&Parser_IsExplicitCapture_m5757_MethodInfo,
	&Parser_IsSingleline_m5758_MethodInfo,
	&Parser_IsIgnorePatternWhitespace_m5759_MethodInfo,
	&Parser_IsECMAScript_m5760_MethodInfo,
	&Parser_NewParseException_m5761_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Parser_t1295____pattern_0_FieldInfo = 
{
	"pattern"/* name */
	, &String_t_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___pattern_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Parser_t1295____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayList_t1161_0_0_1;
FieldInfo Parser_t1295____caps_2_FieldInfo = 
{
	"caps"/* name */
	, &ArrayList_t1161_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___caps_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1149_0_0_1;
FieldInfo Parser_t1295____refs_3_FieldInfo = 
{
	"refs"/* name */
	, &Hashtable_t1149_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___refs_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Parser_t1295____num_groups_4_FieldInfo = 
{
	"num_groups"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___num_groups_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Parser_t1295____gap_5_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Parser_t1295_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1295, ___gap_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Parser_t1295_FieldInfos[] =
{
	&Parser_t1295____pattern_0_FieldInfo,
	&Parser_t1295____ptr_1_FieldInfo,
	&Parser_t1295____caps_2_FieldInfo,
	&Parser_t1295____refs_3_FieldInfo,
	&Parser_t1295____num_groups_4_FieldInfo,
	&Parser_t1295____gap_5_FieldInfo,
	NULL
};
static Il2CppMethodReference Parser_t1295_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool Parser_t1295_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Parser_t1295_0_0_0;
extern Il2CppType Parser_t1295_1_0_0;
struct Parser_t1295;
const Il2CppTypeDefinitionMetadata Parser_t1295_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Parser_t1295_VTable/* vtableMethods */
	, Parser_t1295_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Parser_t1295_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Parser"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Parser_t1295_MethodInfos/* methods */
	, NULL/* properties */
	, Parser_t1295_FieldInfos/* fields */
	, NULL/* events */
	, &Parser_t1295_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Parser_t1295_0_0_0/* byval_arg */
	, &Parser_t1295_1_0_0/* this_arg */
	, &Parser_t1295_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Parser_t1295)/* instance_size */
	, sizeof (Parser_t1295)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 31/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern TypeInfo QuickSearch_t1288_il2cpp_TypeInfo;
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo QuickSearch_t1288_QuickSearch__ctor_m5762_ParameterInfos[] = 
{
	{"str", 0, 134218479, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218480, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 2, 134218481, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
MethodInfo QuickSearch__ctor_m5762_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&QuickSearch__ctor_m5762/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232_SByte_t232/* invoker_method */
	, QuickSearch_t1288_QuickSearch__ctor_m5762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
MethodInfo QuickSearch__cctor_m5763_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&QuickSearch__cctor_m5763/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
MethodInfo QuickSearch_get_Length_m5764_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&QuickSearch_get_Length_m5764/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo QuickSearch_t1288_QuickSearch_Search_m5765_ParameterInfos[] = 
{
	{"text", 0, 134218482, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 1, 134218483, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"end", 2, 134218484, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
MethodInfo QuickSearch_Search_m5765_MethodInfo = 
{
	"Search"/* name */
	, (methodPointerType)&QuickSearch_Search_m5765/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t_Int32_t188_Int32_t188/* invoker_method */
	, QuickSearch_t1288_QuickSearch_Search_m5765_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
MethodInfo QuickSearch_SetupShiftTable_m5766_MethodInfo = 
{
	"SetupShiftTable"/* name */
	, (methodPointerType)&QuickSearch_SetupShiftTable_m5766/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo QuickSearch_t1288_QuickSearch_GetShiftDistance_m5767_ParameterInfos[] = 
{
	{"c", 0, 134218485, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
MethodInfo QuickSearch_GetShiftDistance_m5767_MethodInfo = 
{
	"GetShiftDistance"/* name */
	, (methodPointerType)&QuickSearch_GetShiftDistance_m5767/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int16_t596/* invoker_method */
	, QuickSearch_t1288_QuickSearch_GetShiftDistance_m5767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo QuickSearch_t1288_QuickSearch_GetChar_m5768_ParameterInfos[] = 
{
	{"c", 0, 134218486, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Char_t427_0_0_0;
extern void* RuntimeInvoker_Char_t427_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
MethodInfo QuickSearch_GetChar_m5768_MethodInfo = 
{
	"GetChar"/* name */
	, (methodPointerType)&QuickSearch_GetChar_m5768/* method */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* declaring_type */
	, &Char_t427_0_0_0/* return_type */
	, RuntimeInvoker_Char_t427_Int16_t596/* invoker_method */
	, QuickSearch_t1288_QuickSearch_GetChar_m5768_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* QuickSearch_t1288_MethodInfos[] =
{
	&QuickSearch__ctor_m5762_MethodInfo,
	&QuickSearch__cctor_m5763_MethodInfo,
	&QuickSearch_get_Length_m5764_MethodInfo,
	&QuickSearch_Search_m5765_MethodInfo,
	&QuickSearch_SetupShiftTable_m5766_MethodInfo,
	&QuickSearch_GetShiftDistance_m5767_MethodInfo,
	&QuickSearch_GetChar_m5768_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo QuickSearch_t1288____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo QuickSearch_t1288____len_1_FieldInfo = 
{
	"len"/* name */
	, &Int32_t188_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___len_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo QuickSearch_t1288____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo QuickSearch_t1288____reverse_3_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___reverse_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t722_0_0_1;
FieldInfo QuickSearch_t1288____shift_4_FieldInfo = 
{
	"shift"/* name */
	, &ByteU5BU5D_t722_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___shift_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1149_0_0_1;
FieldInfo QuickSearch_t1288____shiftExtended_5_FieldInfo = 
{
	"shiftExtended"/* name */
	, &Hashtable_t1149_0_0_1/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288, ___shiftExtended_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_49;
FieldInfo QuickSearch_t1288____THRESHOLD_6_FieldInfo = 
{
	"THRESHOLD"/* name */
	, &Int32_t188_0_0_49/* type */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1288_StaticFields, ___THRESHOLD_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* QuickSearch_t1288_FieldInfos[] =
{
	&QuickSearch_t1288____str_0_FieldInfo,
	&QuickSearch_t1288____len_1_FieldInfo,
	&QuickSearch_t1288____ignore_2_FieldInfo,
	&QuickSearch_t1288____reverse_3_FieldInfo,
	&QuickSearch_t1288____shift_4_FieldInfo,
	&QuickSearch_t1288____shiftExtended_5_FieldInfo,
	&QuickSearch_t1288____THRESHOLD_6_FieldInfo,
	NULL
};
extern MethodInfo QuickSearch_get_Length_m5764_MethodInfo;
static PropertyInfo QuickSearch_t1288____Length_PropertyInfo = 
{
	&QuickSearch_t1288_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &QuickSearch_get_Length_m5764_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* QuickSearch_t1288_PropertyInfos[] =
{
	&QuickSearch_t1288____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference QuickSearch_t1288_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool QuickSearch_t1288_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType QuickSearch_t1288_0_0_0;
extern Il2CppType QuickSearch_t1288_1_0_0;
struct QuickSearch_t1288;
const Il2CppTypeDefinitionMetadata QuickSearch_t1288_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, QuickSearch_t1288_VTable/* vtableMethods */
	, QuickSearch_t1288_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo QuickSearch_t1288_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "QuickSearch"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, QuickSearch_t1288_MethodInfos/* methods */
	, QuickSearch_t1288_PropertyInfos/* properties */
	, QuickSearch_t1288_FieldInfos/* fields */
	, NULL/* events */
	, &QuickSearch_t1288_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &QuickSearch_t1288_0_0_0/* byval_arg */
	, &QuickSearch_t1288_1_0_0/* this_arg */
	, &QuickSearch_t1288_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (QuickSearch_t1288)/* instance_size */
	, sizeof (QuickSearch_t1288)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(QuickSearch_t1288_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 1/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.ReplacementEvaluator
extern TypeInfo ReplacementEvaluator_t1301_il2cpp_TypeInfo;
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
extern Il2CppType Regex_t959_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator__ctor_m5769_ParameterInfos[] = 
{
	{"regex", 0, 134218487, &EmptyCustomAttributesCache, &Regex_t959_0_0_0},
	{"replacement", 1, 134218488, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
MethodInfo ReplacementEvaluator__ctor_m5769_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementEvaluator__ctor_m5769/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator__ctor_m5769_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1251_0_0_0;
extern Il2CppType Match_t1251_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_Evaluate_m5770_ParameterInfos[] = 
{
	{"match", 0, 134218489, &EmptyCustomAttributesCache, &Match_t1251_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
MethodInfo ReplacementEvaluator_Evaluate_m5770_MethodInfo = 
{
	"Evaluate"/* name */
	, (methodPointerType)&ReplacementEvaluator_Evaluate_m5770/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_Evaluate_m5770_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1251_0_0_0;
extern Il2CppType StringBuilder_t517_0_0_0;
extern Il2CppType StringBuilder_t517_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_EvaluateAppend_m5771_ParameterInfos[] = 
{
	{"match", 0, 134218490, &EmptyCustomAttributesCache, &Match_t1251_0_0_0},
	{"sb", 1, 134218491, &EmptyCustomAttributesCache, &StringBuilder_t517_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
MethodInfo ReplacementEvaluator_EvaluateAppend_m5771_MethodInfo = 
{
	"EvaluateAppend"/* name */
	, (methodPointerType)&ReplacementEvaluator_EvaluateAppend_m5771/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_EvaluateAppend_m5771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5772_MethodInfo = 
{
	"get_NeedsGroupsOrCaptures"/* name */
	, (methodPointerType)&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5772/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_Ensure_m5773_ParameterInfos[] = 
{
	{"size", 0, 134218492, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
MethodInfo ReplacementEvaluator_Ensure_m5773_MethodInfo = 
{
	"Ensure"/* name */
	, (methodPointerType)&ReplacementEvaluator_Ensure_m5773/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_Ensure_m5773_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_AddFromReplacement_m5774_ParameterInfos[] = 
{
	{"start", 0, 134218493, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"end", 1, 134218494, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
MethodInfo ReplacementEvaluator_AddFromReplacement_m5774_MethodInfo = 
{
	"AddFromReplacement"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddFromReplacement_m5774/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_AddFromReplacement_m5774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_AddInt_m5775_ParameterInfos[] = 
{
	{"i", 0, 134218495, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
MethodInfo ReplacementEvaluator_AddInt_m5775_MethodInfo = 
{
	"AddInt"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddInt_m5775/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_AddInt_m5775_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
MethodInfo ReplacementEvaluator_Compile_m5776_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ReplacementEvaluator_Compile_m5776/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_0;
static ParameterInfo ReplacementEvaluator_t1301_ReplacementEvaluator_CompileTerm_m5777_ParameterInfos[] = 
{
	{"ptr", 0, 134218496, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
MethodInfo ReplacementEvaluator_CompileTerm_m5777_MethodInfo = 
{
	"CompileTerm"/* name */
	, (methodPointerType)&ReplacementEvaluator_CompileTerm_m5777/* method */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int32U26_t597/* invoker_method */
	, ReplacementEvaluator_t1301_ReplacementEvaluator_CompileTerm_m5777_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ReplacementEvaluator_t1301_MethodInfos[] =
{
	&ReplacementEvaluator__ctor_m5769_MethodInfo,
	&ReplacementEvaluator_Evaluate_m5770_MethodInfo,
	&ReplacementEvaluator_EvaluateAppend_m5771_MethodInfo,
	&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5772_MethodInfo,
	&ReplacementEvaluator_Ensure_m5773_MethodInfo,
	&ReplacementEvaluator_AddFromReplacement_m5774_MethodInfo,
	&ReplacementEvaluator_AddInt_m5775_MethodInfo,
	&ReplacementEvaluator_Compile_m5776_MethodInfo,
	&ReplacementEvaluator_CompileTerm_m5777_MethodInfo,
	NULL
};
extern Il2CppType Regex_t959_0_0_1;
FieldInfo ReplacementEvaluator_t1301____regex_0_FieldInfo = 
{
	"regex"/* name */
	, &Regex_t959_0_0_1/* type */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1301, ___regex_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo ReplacementEvaluator_t1301____n_pieces_1_FieldInfo = 
{
	"n_pieces"/* name */
	, &Int32_t188_0_0_1/* type */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1301, ___n_pieces_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32U5BU5D_t1266_0_0_1;
FieldInfo ReplacementEvaluator_t1301____pieces_2_FieldInfo = 
{
	"pieces"/* name */
	, &Int32U5BU5D_t1266_0_0_1/* type */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1301, ___pieces_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo ReplacementEvaluator_t1301____replacement_3_FieldInfo = 
{
	"replacement"/* name */
	, &String_t_0_0_1/* type */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1301, ___replacement_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ReplacementEvaluator_t1301_FieldInfos[] =
{
	&ReplacementEvaluator_t1301____regex_0_FieldInfo,
	&ReplacementEvaluator_t1301____n_pieces_1_FieldInfo,
	&ReplacementEvaluator_t1301____pieces_2_FieldInfo,
	&ReplacementEvaluator_t1301____replacement_3_FieldInfo,
	NULL
};
extern MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5772_MethodInfo;
static PropertyInfo ReplacementEvaluator_t1301____NeedsGroupsOrCaptures_PropertyInfo = 
{
	&ReplacementEvaluator_t1301_il2cpp_TypeInfo/* parent */
	, "NeedsGroupsOrCaptures"/* name */
	, &ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ReplacementEvaluator_t1301_PropertyInfos[] =
{
	&ReplacementEvaluator_t1301____NeedsGroupsOrCaptures_PropertyInfo,
	NULL
};
static Il2CppMethodReference ReplacementEvaluator_t1301_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool ReplacementEvaluator_t1301_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ReplacementEvaluator_t1301_0_0_0;
extern Il2CppType ReplacementEvaluator_t1301_1_0_0;
struct ReplacementEvaluator_t1301;
const Il2CppTypeDefinitionMetadata ReplacementEvaluator_t1301_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReplacementEvaluator_t1301_VTable/* vtableMethods */
	, ReplacementEvaluator_t1301_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ReplacementEvaluator_t1301_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ReplacementEvaluator_t1301_MethodInfos/* methods */
	, ReplacementEvaluator_t1301_PropertyInfos/* properties */
	, ReplacementEvaluator_t1301_FieldInfos/* fields */
	, NULL/* events */
	, &ReplacementEvaluator_t1301_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ReplacementEvaluator_t1301_0_0_0/* byval_arg */
	, &ReplacementEvaluator_t1301_1_0_0/* this_arg */
	, &ReplacementEvaluator_t1301_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementEvaluator_t1301)/* instance_size */
	, sizeof (ReplacementEvaluator_t1301)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 1/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
extern TypeInfo ExpressionCollection_t1302_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
MethodInfo ExpressionCollection__ctor_m5778_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionCollection__ctor_m5778/* method */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo ExpressionCollection_t1302_ExpressionCollection_Add_m5779_ParameterInfos[] = 
{
	{"e", 0, 134218497, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_Add_m5779_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ExpressionCollection_Add_m5779/* method */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ExpressionCollection_t1302_ExpressionCollection_Add_m5779_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo ExpressionCollection_t1302_ExpressionCollection_get_Item_m5780_ParameterInfos[] = 
{
	{"i", 0, 134218498, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
MethodInfo ExpressionCollection_get_Item_m5780_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ExpressionCollection_get_Item_m5780/* method */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188/* invoker_method */
	, ExpressionCollection_t1302_ExpressionCollection_get_Item_m5780_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo ExpressionCollection_t1302_ExpressionCollection_set_Item_m5781_ParameterInfos[] = 
{
	{"i", 0, 134218499, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"value", 1, 134218500, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_set_Item_m5781_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ExpressionCollection_set_Item_m5781/* method */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Object_t/* invoker_method */
	, ExpressionCollection_t1302_ExpressionCollection_set_Item_m5781_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ExpressionCollection_t1302_ExpressionCollection_OnValidate_m5782_ParameterInfos[] = 
{
	{"o", 0, 134218501, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
MethodInfo ExpressionCollection_OnValidate_m5782_MethodInfo = 
{
	"OnValidate"/* name */
	, (methodPointerType)&ExpressionCollection_OnValidate_m5782/* method */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ExpressionCollection_t1302_ExpressionCollection_OnValidate_m5782_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionCollection_t1302_MethodInfos[] =
{
	&ExpressionCollection__ctor_m5778_MethodInfo,
	&ExpressionCollection_Add_m5779_MethodInfo,
	&ExpressionCollection_get_Item_m5780_MethodInfo,
	&ExpressionCollection_set_Item_m5781_MethodInfo,
	&ExpressionCollection_OnValidate_m5782_MethodInfo,
	NULL
};
extern MethodInfo ExpressionCollection_get_Item_m5780_MethodInfo;
extern MethodInfo ExpressionCollection_set_Item_m5781_MethodInfo;
static PropertyInfo ExpressionCollection_t1302____Item_PropertyInfo = 
{
	&ExpressionCollection_t1302_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ExpressionCollection_get_Item_m5780_MethodInfo/* get */
	, &ExpressionCollection_set_Item_m5781_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionCollection_t1302_PropertyInfos[] =
{
	&ExpressionCollection_t1302____Item_PropertyInfo,
	NULL
};
extern MethodInfo CollectionBase_GetEnumerator_m6130_MethodInfo;
extern MethodInfo CollectionBase_get_Count_m6091_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_IsSynchronized_m6281_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_SyncRoot_m6282_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_CopyTo_m6283_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsFixedSize_m6284_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsReadOnly_m6285_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_Item_m6286_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_set_Item_m6287_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Add_m6288_MethodInfo;
extern MethodInfo CollectionBase_Clear_m6144_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Contains_m6289_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_IndexOf_m6290_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Insert_m6291_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Remove_m6292_MethodInfo;
extern MethodInfo CollectionBase_RemoveAt_m6293_MethodInfo;
extern MethodInfo CollectionBase_OnClear_m6294_MethodInfo;
extern MethodInfo CollectionBase_OnClearComplete_m6295_MethodInfo;
extern MethodInfo CollectionBase_OnInsert_m6296_MethodInfo;
extern MethodInfo CollectionBase_OnInsertComplete_m6297_MethodInfo;
extern MethodInfo CollectionBase_OnRemove_m6298_MethodInfo;
extern MethodInfo CollectionBase_OnRemoveComplete_m6299_MethodInfo;
extern MethodInfo CollectionBase_OnSet_m6300_MethodInfo;
extern MethodInfo CollectionBase_OnSetComplete_m6301_MethodInfo;
extern MethodInfo ExpressionCollection_OnValidate_m5782_MethodInfo;
static Il2CppMethodReference ExpressionCollection_t1302_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&CollectionBase_GetEnumerator_m6130_MethodInfo,
	&CollectionBase_get_Count_m6091_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_IsSynchronized_m6281_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_SyncRoot_m6282_MethodInfo,
	&CollectionBase_System_Collections_ICollection_CopyTo_m6283_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsFixedSize_m6284_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsReadOnly_m6285_MethodInfo,
	&CollectionBase_System_Collections_IList_get_Item_m6286_MethodInfo,
	&CollectionBase_System_Collections_IList_set_Item_m6287_MethodInfo,
	&CollectionBase_System_Collections_IList_Add_m6288_MethodInfo,
	&CollectionBase_Clear_m6144_MethodInfo,
	&CollectionBase_System_Collections_IList_Contains_m6289_MethodInfo,
	&CollectionBase_System_Collections_IList_IndexOf_m6290_MethodInfo,
	&CollectionBase_System_Collections_IList_Insert_m6291_MethodInfo,
	&CollectionBase_System_Collections_IList_Remove_m6292_MethodInfo,
	&CollectionBase_RemoveAt_m6293_MethodInfo,
	&CollectionBase_OnClear_m6294_MethodInfo,
	&CollectionBase_OnClearComplete_m6295_MethodInfo,
	&CollectionBase_OnInsert_m6296_MethodInfo,
	&CollectionBase_OnInsertComplete_m6297_MethodInfo,
	&CollectionBase_OnRemove_m6298_MethodInfo,
	&CollectionBase_OnRemoveComplete_m6299_MethodInfo,
	&CollectionBase_OnSet_m6300_MethodInfo,
	&CollectionBase_OnSetComplete_m6301_MethodInfo,
	&ExpressionCollection_OnValidate_m5782_MethodInfo,
};
static bool ExpressionCollection_t1302_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExpressionCollection_t1302_InterfacesOffsets[] = 
{
	{ &IEnumerable_t620_0_0_0, 4},
	{ &ICollection_t1030_0_0_0, 5},
	{ &IList_t1031_0_0_0, 9},
};
void ExpressionCollection_t1302_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t621 * tmp;
		tmp = (DefaultMemberAttribute_t621 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t621_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m3209(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m3209_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExpressionCollection_t1302__CustomAttributeCache = {
1,
NULL,
&ExpressionCollection_t1302_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionCollection_t1302_0_0_0;
extern Il2CppType ExpressionCollection_t1302_1_0_0;
extern Il2CppType CollectionBase_t1221_0_0_0;
struct ExpressionCollection_t1302;
extern CustomAttributesCache ExpressionCollection_t1302__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata ExpressionCollection_t1302_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExpressionCollection_t1302_InterfacesOffsets/* interfaceOffsets */
	, &CollectionBase_t1221_0_0_0/* parent */
	, ExpressionCollection_t1302_VTable/* vtableMethods */
	, ExpressionCollection_t1302_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionCollection_t1302_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionCollection"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionCollection_t1302_MethodInfos/* methods */
	, ExpressionCollection_t1302_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ExpressionCollection_t1302_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &ExpressionCollection_t1302__CustomAttributeCache/* custom_attributes_cache */
	, &ExpressionCollection_t1302_0_0_0/* byval_arg */
	, &ExpressionCollection_t1302_1_0_0/* this_arg */
	, &ExpressionCollection_t1302_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionCollection_t1302)/* instance_size */
	, sizeof (ExpressionCollection_t1302)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 29/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern TypeInfo Expression_t1299_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
MethodInfo Expression__ctor_m5783_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Expression__ctor_m5783/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Expression_t1299_Expression_Compile_m6204_ParameterInfos[] = 
{
	{"cmp", 0, 134218502, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218503, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Expression_Compile_m6204_MethodInfo = 
{
	"Compile"/* name */
	, NULL/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Expression_t1299_Expression_Compile_m6204_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Expression_t1299_Expression_GetWidth_m6202_ParameterInfos[] = 
{
	{"min", 0, 134218504, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218505, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
MethodInfo Expression_GetWidth_m6202_MethodInfo = 
{
	"GetWidth"/* name */
	, NULL/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Expression_t1299_Expression_GetWidth_m6202_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
MethodInfo Expression_GetFixedWidth_m5784_MethodInfo = 
{
	"GetFixedWidth"/* name */
	, (methodPointerType)&Expression_GetFixedWidth_m5784/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Expression_t1299_Expression_GetAnchorInfo_m5785_ParameterInfos[] = 
{
	{"reverse", 0, 134218506, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
MethodInfo Expression_GetAnchorInfo_m5785_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Expression_GetAnchorInfo_m5785/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t232/* invoker_method */
	, Expression_t1299_Expression_GetAnchorInfo_m5785_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
MethodInfo Expression_IsComplex_m6203_MethodInfo = 
{
	"IsComplex"/* name */
	, NULL/* method */
	, &Expression_t1299_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Expression_t1299_MethodInfos[] =
{
	&Expression__ctor_m5783_MethodInfo,
	&Expression_Compile_m6204_MethodInfo,
	&Expression_GetWidth_m6202_MethodInfo,
	&Expression_GetFixedWidth_m5784_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&Expression_IsComplex_m6203_MethodInfo,
	NULL
};
extern MethodInfo Expression_GetAnchorInfo_m5785_MethodInfo;
static Il2CppMethodReference Expression_t1299_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	NULL,
};
static bool Expression_t1299_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Expression_t1299_1_0_0;
struct Expression_t1299;
const Il2CppTypeDefinitionMetadata Expression_t1299_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Expression_t1299_VTable/* vtableMethods */
	, Expression_t1299_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Expression_t1299_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Expression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Expression_t1299_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Expression_t1299_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Expression_t1299_0_0_0/* byval_arg */
	, &Expression_t1299_1_0_0/* this_arg */
	, &Expression_t1299_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Expression_t1299)/* instance_size */
	, sizeof (Expression_t1299)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern TypeInfo CompositeExpression_t1305_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
MethodInfo CompositeExpression__ctor_m5786_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CompositeExpression__ctor_m5786/* method */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1302_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
MethodInfo CompositeExpression_get_Expressions_m5787_MethodInfo = 
{
	"get_Expressions"/* name */
	, (methodPointerType)&CompositeExpression_get_Expressions_m5787/* method */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1302_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2180/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo CompositeExpression_t1305_CompositeExpression_GetWidth_m5788_ParameterInfos[] = 
{
	{"min", 0, 134218507, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218508, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"count", 2, 134218509, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
MethodInfo CompositeExpression_GetWidth_m5788_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CompositeExpression_GetWidth_m5788/* method */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597_Int32_t188/* invoker_method */
	, CompositeExpression_t1305_CompositeExpression_GetWidth_m5788_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
MethodInfo CompositeExpression_IsComplex_m5789_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CompositeExpression_IsComplex_m5789/* method */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CompositeExpression_t1305_MethodInfos[] =
{
	&CompositeExpression__ctor_m5786_MethodInfo,
	&CompositeExpression_get_Expressions_m5787_MethodInfo,
	&CompositeExpression_GetWidth_m5788_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
	NULL
};
extern Il2CppType ExpressionCollection_t1302_0_0_1;
FieldInfo CompositeExpression_t1305____expressions_0_FieldInfo = 
{
	"expressions"/* name */
	, &ExpressionCollection_t1302_0_0_1/* type */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* parent */
	, offsetof(CompositeExpression_t1305, ___expressions_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CompositeExpression_t1305_FieldInfos[] =
{
	&CompositeExpression_t1305____expressions_0_FieldInfo,
	NULL
};
extern MethodInfo CompositeExpression_get_Expressions_m5787_MethodInfo;
static PropertyInfo CompositeExpression_t1305____Expressions_PropertyInfo = 
{
	&CompositeExpression_t1305_il2cpp_TypeInfo/* parent */
	, "Expressions"/* name */
	, &CompositeExpression_get_Expressions_m5787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CompositeExpression_t1305_PropertyInfos[] =
{
	&CompositeExpression_t1305____Expressions_PropertyInfo,
	NULL
};
extern MethodInfo CompositeExpression_IsComplex_m5789_MethodInfo;
static Il2CppMethodReference CompositeExpression_t1305_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool CompositeExpression_t1305_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CompositeExpression_t1305_0_0_0;
extern Il2CppType CompositeExpression_t1305_1_0_0;
struct CompositeExpression_t1305;
const Il2CppTypeDefinitionMetadata CompositeExpression_t1305_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1299_0_0_0/* parent */
	, CompositeExpression_t1305_VTable/* vtableMethods */
	, CompositeExpression_t1305_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CompositeExpression_t1305_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CompositeExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CompositeExpression_t1305_MethodInfos/* methods */
	, CompositeExpression_t1305_PropertyInfos/* properties */
	, CompositeExpression_t1305_FieldInfos/* fields */
	, NULL/* events */
	, &CompositeExpression_t1305_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CompositeExpression_t1305_0_0_0/* byval_arg */
	, &CompositeExpression_t1305_1_0_0/* this_arg */
	, &CompositeExpression_t1305_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CompositeExpression_t1305)/* instance_size */
	, sizeof (CompositeExpression_t1305)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern TypeInfo Group_t1297_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
MethodInfo Group__ctor_m5790_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Group__ctor_m5790/* method */
	, &Group_t1297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo Group_t1297_Group_AppendExpression_m5791_ParameterInfos[] = 
{
	{"e", 0, 134218510, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Group_AppendExpression_m5791_MethodInfo = 
{
	"AppendExpression"/* name */
	, (methodPointerType)&Group_AppendExpression_m5791/* method */
	, &Group_t1297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Group_t1297_Group_AppendExpression_m5791_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Group_t1297_Group_Compile_m5792_ParameterInfos[] = 
{
	{"cmp", 0, 134218511, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218512, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Group_Compile_m5792_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Group_Compile_m5792/* method */
	, &Group_t1297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Group_t1297_Group_Compile_m5792_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Group_t1297_Group_GetWidth_m5793_ParameterInfos[] = 
{
	{"min", 0, 134218513, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218514, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
MethodInfo Group_GetWidth_m5793_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Group_GetWidth_m5793/* method */
	, &Group_t1297_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Group_t1297_Group_GetWidth_m5793_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Group_t1297_Group_GetAnchorInfo_m5794_ParameterInfos[] = 
{
	{"reverse", 0, 134218515, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
MethodInfo Group_GetAnchorInfo_m5794_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Group_GetAnchorInfo_m5794/* method */
	, &Group_t1297_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t232/* invoker_method */
	, Group_t1297_Group_GetAnchorInfo_m5794_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Group_t1297_MethodInfos[] =
{
	&Group__ctor_m5790_MethodInfo,
	&Group_AppendExpression_m5791_MethodInfo,
	&Group_Compile_m5792_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	NULL
};
extern MethodInfo Group_Compile_m5792_MethodInfo;
extern MethodInfo Group_GetWidth_m5793_MethodInfo;
extern MethodInfo Group_GetAnchorInfo_m5794_MethodInfo;
static Il2CppMethodReference Group_t1297_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Group_Compile_m5792_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool Group_t1297_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Group_t1297_1_0_0;
struct Group_t1297;
const Il2CppTypeDefinitionMetadata Group_t1297_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1305_0_0_0/* parent */
	, Group_t1297_VTable/* vtableMethods */
	, Group_t1297_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Group_t1297_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Group"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Group_t1297_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Group_t1297_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Group_t1297_0_0_0/* byval_arg */
	, &Group_t1297_1_0_0/* this_arg */
	, &Group_t1297_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Group_t1297)/* instance_size */
	, sizeof (Group_t1297)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern TypeInfo RegularExpression_t1296_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
MethodInfo RegularExpression__ctor_m5795_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RegularExpression__ctor_m5795/* method */
	, &RegularExpression_t1296_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo RegularExpression_t1296_RegularExpression_set_GroupCount_m5796_ParameterInfos[] = 
{
	{"value", 0, 134218516, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
MethodInfo RegularExpression_set_GroupCount_m5796_MethodInfo = 
{
	"set_GroupCount"/* name */
	, (methodPointerType)&RegularExpression_set_GroupCount_m5796/* method */
	, &RegularExpression_t1296_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, RegularExpression_t1296_RegularExpression_set_GroupCount_m5796_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo RegularExpression_t1296_RegularExpression_Compile_m5797_ParameterInfos[] = 
{
	{"cmp", 0, 134218517, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218518, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo RegularExpression_Compile_m5797_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&RegularExpression_Compile_m5797/* method */
	, &RegularExpression_t1296_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, RegularExpression_t1296_RegularExpression_Compile_m5797_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RegularExpression_t1296_MethodInfos[] =
{
	&RegularExpression__ctor_m5795_MethodInfo,
	&RegularExpression_set_GroupCount_m5796_MethodInfo,
	&RegularExpression_Compile_m5797_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo RegularExpression_t1296____group_count_1_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t188_0_0_1/* type */
	, &RegularExpression_t1296_il2cpp_TypeInfo/* parent */
	, offsetof(RegularExpression_t1296, ___group_count_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RegularExpression_t1296_FieldInfos[] =
{
	&RegularExpression_t1296____group_count_1_FieldInfo,
	NULL
};
extern MethodInfo RegularExpression_set_GroupCount_m5796_MethodInfo;
static PropertyInfo RegularExpression_t1296____GroupCount_PropertyInfo = 
{
	&RegularExpression_t1296_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, NULL/* get */
	, &RegularExpression_set_GroupCount_m5796_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RegularExpression_t1296_PropertyInfos[] =
{
	&RegularExpression_t1296____GroupCount_PropertyInfo,
	NULL
};
extern MethodInfo RegularExpression_Compile_m5797_MethodInfo;
static Il2CppMethodReference RegularExpression_t1296_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&RegularExpression_Compile_m5797_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool RegularExpression_t1296_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RegularExpression_t1296_0_0_0;
extern Il2CppType RegularExpression_t1296_1_0_0;
struct RegularExpression_t1296;
const Il2CppTypeDefinitionMetadata RegularExpression_t1296_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1297_0_0_0/* parent */
	, RegularExpression_t1296_VTable/* vtableMethods */
	, RegularExpression_t1296_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RegularExpression_t1296_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RegularExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, RegularExpression_t1296_MethodInfos/* methods */
	, RegularExpression_t1296_PropertyInfos/* properties */
	, RegularExpression_t1296_FieldInfos/* fields */
	, NULL/* events */
	, &RegularExpression_t1296_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RegularExpression_t1296_0_0_0/* byval_arg */
	, &RegularExpression_t1296_1_0_0/* this_arg */
	, &RegularExpression_t1296_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RegularExpression_t1296)/* instance_size */
	, sizeof (RegularExpression_t1296)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern TypeInfo CapturingGroup_t1306_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
MethodInfo CapturingGroup__ctor_m5798_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CapturingGroup__ctor_m5798/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
MethodInfo CapturingGroup_get_Index_m5799_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&CapturingGroup_get_Index_m5799/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo CapturingGroup_t1306_CapturingGroup_set_Index_m5800_ParameterInfos[] = 
{
	{"value", 0, 134218519, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
MethodInfo CapturingGroup_set_Index_m5800_MethodInfo = 
{
	"set_Index"/* name */
	, (methodPointerType)&CapturingGroup_set_Index_m5800/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, CapturingGroup_t1306_CapturingGroup_set_Index_m5800_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
MethodInfo CapturingGroup_get_Name_m5801_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&CapturingGroup_get_Name_m5801/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo CapturingGroup_t1306_CapturingGroup_set_Name_m5802_ParameterInfos[] = 
{
	{"value", 0, 134218520, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
MethodInfo CapturingGroup_set_Name_m5802_MethodInfo = 
{
	"set_Name"/* name */
	, (methodPointerType)&CapturingGroup_set_Name_m5802/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, CapturingGroup_t1306_CapturingGroup_set_Name_m5802_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
MethodInfo CapturingGroup_get_IsNamed_m5803_MethodInfo = 
{
	"get_IsNamed"/* name */
	, (methodPointerType)&CapturingGroup_get_IsNamed_m5803/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CapturingGroup_t1306_CapturingGroup_Compile_m5804_ParameterInfos[] = 
{
	{"cmp", 0, 134218521, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218522, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CapturingGroup_Compile_m5804_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CapturingGroup_Compile_m5804/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, CapturingGroup_t1306_CapturingGroup_Compile_m5804_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
MethodInfo CapturingGroup_IsComplex_m5805_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CapturingGroup_IsComplex_m5805/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CapturingGroup_t1306_CapturingGroup_CompareTo_m5806_ParameterInfos[] = 
{
	{"other", 0, 134218523, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
MethodInfo CapturingGroup_CompareTo_m5806_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&CapturingGroup_CompareTo_m5806/* method */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t/* invoker_method */
	, CapturingGroup_t1306_CapturingGroup_CompareTo_m5806_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CapturingGroup_t1306_MethodInfos[] =
{
	&CapturingGroup__ctor_m5798_MethodInfo,
	&CapturingGroup_get_Index_m5799_MethodInfo,
	&CapturingGroup_set_Index_m5800_MethodInfo,
	&CapturingGroup_get_Name_m5801_MethodInfo,
	&CapturingGroup_set_Name_m5802_MethodInfo,
	&CapturingGroup_get_IsNamed_m5803_MethodInfo,
	&CapturingGroup_Compile_m5804_MethodInfo,
	&CapturingGroup_IsComplex_m5805_MethodInfo,
	&CapturingGroup_CompareTo_m5806_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo CapturingGroup_t1306____gid_1_FieldInfo = 
{
	"gid"/* name */
	, &Int32_t188_0_0_1/* type */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1306, ___gid_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo CapturingGroup_t1306____name_2_FieldInfo = 
{
	"name"/* name */
	, &String_t_0_0_1/* type */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1306, ___name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CapturingGroup_t1306_FieldInfos[] =
{
	&CapturingGroup_t1306____gid_1_FieldInfo,
	&CapturingGroup_t1306____name_2_FieldInfo,
	NULL
};
extern MethodInfo CapturingGroup_get_Index_m5799_MethodInfo;
extern MethodInfo CapturingGroup_set_Index_m5800_MethodInfo;
static PropertyInfo CapturingGroup_t1306____Index_PropertyInfo = 
{
	&CapturingGroup_t1306_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &CapturingGroup_get_Index_m5799_MethodInfo/* get */
	, &CapturingGroup_set_Index_m5800_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_Name_m5801_MethodInfo;
extern MethodInfo CapturingGroup_set_Name_m5802_MethodInfo;
static PropertyInfo CapturingGroup_t1306____Name_PropertyInfo = 
{
	&CapturingGroup_t1306_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &CapturingGroup_get_Name_m5801_MethodInfo/* get */
	, &CapturingGroup_set_Name_m5802_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_IsNamed_m5803_MethodInfo;
static PropertyInfo CapturingGroup_t1306____IsNamed_PropertyInfo = 
{
	&CapturingGroup_t1306_il2cpp_TypeInfo/* parent */
	, "IsNamed"/* name */
	, &CapturingGroup_get_IsNamed_m5803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CapturingGroup_t1306_PropertyInfos[] =
{
	&CapturingGroup_t1306____Index_PropertyInfo,
	&CapturingGroup_t1306____Name_PropertyInfo,
	&CapturingGroup_t1306____IsNamed_PropertyInfo,
	NULL
};
extern MethodInfo CapturingGroup_Compile_m5804_MethodInfo;
extern MethodInfo CapturingGroup_IsComplex_m5805_MethodInfo;
extern MethodInfo CapturingGroup_CompareTo_m5806_MethodInfo;
static Il2CppMethodReference CapturingGroup_t1306_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&CapturingGroup_Compile_m5804_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	&CapturingGroup_IsComplex_m5805_MethodInfo,
	&CapturingGroup_CompareTo_m5806_MethodInfo,
};
static bool CapturingGroup_t1306_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CapturingGroup_t1306_InterfacesTypeInfos[] = 
{
	&IComparable_t226_0_0_0,
};
static Il2CppInterfaceOffsetPair CapturingGroup_t1306_InterfacesOffsets[] = 
{
	{ &IComparable_t226_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CapturingGroup_t1306_0_0_0;
extern Il2CppType CapturingGroup_t1306_1_0_0;
struct CapturingGroup_t1306;
const Il2CppTypeDefinitionMetadata CapturingGroup_t1306_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CapturingGroup_t1306_InterfacesTypeInfos/* implementedInterfaces */
	, CapturingGroup_t1306_InterfacesOffsets/* interfaceOffsets */
	, &Group_t1297_0_0_0/* parent */
	, CapturingGroup_t1306_VTable/* vtableMethods */
	, CapturingGroup_t1306_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CapturingGroup_t1306_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CapturingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CapturingGroup_t1306_MethodInfos/* methods */
	, CapturingGroup_t1306_PropertyInfos/* properties */
	, CapturingGroup_t1306_FieldInfos/* fields */
	, NULL/* events */
	, &CapturingGroup_t1306_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CapturingGroup_t1306_0_0_0/* byval_arg */
	, &CapturingGroup_t1306_1_0_0/* this_arg */
	, &CapturingGroup_t1306_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CapturingGroup_t1306)/* instance_size */
	, sizeof (CapturingGroup_t1306)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern TypeInfo BalancingGroup_t1307_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
MethodInfo BalancingGroup__ctor_m5807_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BalancingGroup__ctor_m5807/* method */
	, &BalancingGroup_t1307_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1306_0_0_0;
static ParameterInfo BalancingGroup_t1307_BalancingGroup_set_Balance_m5808_ParameterInfos[] = 
{
	{"value", 0, 134218524, &EmptyCustomAttributesCache, &CapturingGroup_t1306_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo BalancingGroup_set_Balance_m5808_MethodInfo = 
{
	"set_Balance"/* name */
	, (methodPointerType)&BalancingGroup_set_Balance_m5808/* method */
	, &BalancingGroup_t1307_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, BalancingGroup_t1307_BalancingGroup_set_Balance_m5808_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo BalancingGroup_t1307_BalancingGroup_Compile_m5809_ParameterInfos[] = 
{
	{"cmp", 0, 134218525, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218526, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BalancingGroup_Compile_m5809_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BalancingGroup_Compile_m5809/* method */
	, &BalancingGroup_t1307_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, BalancingGroup_t1307_BalancingGroup_Compile_m5809_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BalancingGroup_t1307_MethodInfos[] =
{
	&BalancingGroup__ctor_m5807_MethodInfo,
	&BalancingGroup_set_Balance_m5808_MethodInfo,
	&BalancingGroup_Compile_m5809_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1306_0_0_1;
FieldInfo BalancingGroup_t1307____balance_3_FieldInfo = 
{
	"balance"/* name */
	, &CapturingGroup_t1306_0_0_1/* type */
	, &BalancingGroup_t1307_il2cpp_TypeInfo/* parent */
	, offsetof(BalancingGroup_t1307, ___balance_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BalancingGroup_t1307_FieldInfos[] =
{
	&BalancingGroup_t1307____balance_3_FieldInfo,
	NULL
};
extern MethodInfo BalancingGroup_set_Balance_m5808_MethodInfo;
static PropertyInfo BalancingGroup_t1307____Balance_PropertyInfo = 
{
	&BalancingGroup_t1307_il2cpp_TypeInfo/* parent */
	, "Balance"/* name */
	, NULL/* get */
	, &BalancingGroup_set_Balance_m5808_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* BalancingGroup_t1307_PropertyInfos[] =
{
	&BalancingGroup_t1307____Balance_PropertyInfo,
	NULL
};
extern MethodInfo BalancingGroup_Compile_m5809_MethodInfo;
static Il2CppMethodReference BalancingGroup_t1307_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&BalancingGroup_Compile_m5809_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	&CapturingGroup_IsComplex_m5805_MethodInfo,
	&CapturingGroup_CompareTo_m5806_MethodInfo,
};
static bool BalancingGroup_t1307_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BalancingGroup_t1307_InterfacesOffsets[] = 
{
	{ &IComparable_t226_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BalancingGroup_t1307_0_0_0;
extern Il2CppType BalancingGroup_t1307_1_0_0;
struct BalancingGroup_t1307;
const Il2CppTypeDefinitionMetadata BalancingGroup_t1307_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BalancingGroup_t1307_InterfacesOffsets/* interfaceOffsets */
	, &CapturingGroup_t1306_0_0_0/* parent */
	, BalancingGroup_t1307_VTable/* vtableMethods */
	, BalancingGroup_t1307_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BalancingGroup_t1307_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BalancingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BalancingGroup_t1307_MethodInfos/* methods */
	, BalancingGroup_t1307_PropertyInfos/* properties */
	, BalancingGroup_t1307_FieldInfos/* fields */
	, NULL/* events */
	, &BalancingGroup_t1307_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BalancingGroup_t1307_0_0_0/* byval_arg */
	, &BalancingGroup_t1307_1_0_0/* this_arg */
	, &BalancingGroup_t1307_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BalancingGroup_t1307)/* instance_size */
	, sizeof (BalancingGroup_t1307)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern TypeInfo NonBacktrackingGroup_t1308_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
MethodInfo NonBacktrackingGroup__ctor_m5810_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonBacktrackingGroup__ctor_m5810/* method */
	, &NonBacktrackingGroup_t1308_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo NonBacktrackingGroup_t1308_NonBacktrackingGroup_Compile_m5811_ParameterInfos[] = 
{
	{"cmp", 0, 134218527, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218528, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo NonBacktrackingGroup_Compile_m5811_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&NonBacktrackingGroup_Compile_m5811/* method */
	, &NonBacktrackingGroup_t1308_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, NonBacktrackingGroup_t1308_NonBacktrackingGroup_Compile_m5811_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
MethodInfo NonBacktrackingGroup_IsComplex_m5812_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&NonBacktrackingGroup_IsComplex_m5812/* method */
	, &NonBacktrackingGroup_t1308_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* NonBacktrackingGroup_t1308_MethodInfos[] =
{
	&NonBacktrackingGroup__ctor_m5810_MethodInfo,
	&NonBacktrackingGroup_Compile_m5811_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m5812_MethodInfo,
	NULL
};
extern MethodInfo NonBacktrackingGroup_Compile_m5811_MethodInfo;
extern MethodInfo NonBacktrackingGroup_IsComplex_m5812_MethodInfo;
static Il2CppMethodReference NonBacktrackingGroup_t1308_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&NonBacktrackingGroup_Compile_m5811_MethodInfo,
	&Group_GetWidth_m5793_MethodInfo,
	&Group_GetAnchorInfo_m5794_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m5812_MethodInfo,
};
static bool NonBacktrackingGroup_t1308_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType NonBacktrackingGroup_t1308_0_0_0;
extern Il2CppType NonBacktrackingGroup_t1308_1_0_0;
struct NonBacktrackingGroup_t1308;
const Il2CppTypeDefinitionMetadata NonBacktrackingGroup_t1308_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1297_0_0_0/* parent */
	, NonBacktrackingGroup_t1308_VTable/* vtableMethods */
	, NonBacktrackingGroup_t1308_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo NonBacktrackingGroup_t1308_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonBacktrackingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, NonBacktrackingGroup_t1308_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &NonBacktrackingGroup_t1308_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &NonBacktrackingGroup_t1308_0_0_0/* byval_arg */
	, &NonBacktrackingGroup_t1308_1_0_0/* this_arg */
	, &NonBacktrackingGroup_t1308_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonBacktrackingGroup_t1308)/* instance_size */
	, sizeof (NonBacktrackingGroup_t1308)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern TypeInfo Repetition_t1309_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Repetition_t1309_Repetition__ctor_m5813_ParameterInfos[] = 
{
	{"min", 0, 134218529, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"max", 1, 134218530, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"lazy", 2, 134218531, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
MethodInfo Repetition__ctor_m5813_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Repetition__ctor_m5813/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Int32_t188_SByte_t232/* invoker_method */
	, Repetition_t1309_Repetition__ctor_m5813_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
MethodInfo Repetition_get_Expression_m5814_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&Repetition_get_Expression_m5814/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo Repetition_t1309_Repetition_set_Expression_m5815_ParameterInfos[] = 
{
	{"value", 0, 134218532, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Repetition_set_Expression_m5815_MethodInfo = 
{
	"set_Expression"/* name */
	, (methodPointerType)&Repetition_set_Expression_m5815/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Repetition_t1309_Repetition_set_Expression_m5815_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
MethodInfo Repetition_get_Minimum_m5816_MethodInfo = 
{
	"get_Minimum"/* name */
	, (methodPointerType)&Repetition_get_Minimum_m5816/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Repetition_t1309_Repetition_Compile_m5817_ParameterInfos[] = 
{
	{"cmp", 0, 134218533, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218534, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Repetition_Compile_m5817_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Repetition_Compile_m5817/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Repetition_t1309_Repetition_Compile_m5817_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Repetition_t1309_Repetition_GetWidth_m5818_ParameterInfos[] = 
{
	{"min", 0, 134218535, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218536, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
MethodInfo Repetition_GetWidth_m5818_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Repetition_GetWidth_m5818/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Repetition_t1309_Repetition_GetWidth_m5818_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Repetition_t1309_Repetition_GetAnchorInfo_m5819_ParameterInfos[] = 
{
	{"reverse", 0, 134218537, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
MethodInfo Repetition_GetAnchorInfo_m5819_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Repetition_GetAnchorInfo_m5819/* method */
	, &Repetition_t1309_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t232/* invoker_method */
	, Repetition_t1309_Repetition_GetAnchorInfo_m5819_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Repetition_t1309_MethodInfos[] =
{
	&Repetition__ctor_m5813_MethodInfo,
	&Repetition_get_Expression_m5814_MethodInfo,
	&Repetition_set_Expression_m5815_MethodInfo,
	&Repetition_get_Minimum_m5816_MethodInfo,
	&Repetition_Compile_m5817_MethodInfo,
	&Repetition_GetWidth_m5818_MethodInfo,
	&Repetition_GetAnchorInfo_m5819_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Repetition_t1309____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Repetition_t1309_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1309, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Repetition_t1309____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Repetition_t1309_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1309, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Repetition_t1309____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Repetition_t1309_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1309, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Repetition_t1309_FieldInfos[] =
{
	&Repetition_t1309____min_1_FieldInfo,
	&Repetition_t1309____max_2_FieldInfo,
	&Repetition_t1309____lazy_3_FieldInfo,
	NULL
};
extern MethodInfo Repetition_get_Expression_m5814_MethodInfo;
extern MethodInfo Repetition_set_Expression_m5815_MethodInfo;
static PropertyInfo Repetition_t1309____Expression_PropertyInfo = 
{
	&Repetition_t1309_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &Repetition_get_Expression_m5814_MethodInfo/* get */
	, &Repetition_set_Expression_m5815_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Repetition_get_Minimum_m5816_MethodInfo;
static PropertyInfo Repetition_t1309____Minimum_PropertyInfo = 
{
	&Repetition_t1309_il2cpp_TypeInfo/* parent */
	, "Minimum"/* name */
	, &Repetition_get_Minimum_m5816_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Repetition_t1309_PropertyInfos[] =
{
	&Repetition_t1309____Expression_PropertyInfo,
	&Repetition_t1309____Minimum_PropertyInfo,
	NULL
};
extern MethodInfo Repetition_Compile_m5817_MethodInfo;
extern MethodInfo Repetition_GetWidth_m5818_MethodInfo;
extern MethodInfo Repetition_GetAnchorInfo_m5819_MethodInfo;
static Il2CppMethodReference Repetition_t1309_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Repetition_Compile_m5817_MethodInfo,
	&Repetition_GetWidth_m5818_MethodInfo,
	&Repetition_GetAnchorInfo_m5819_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool Repetition_t1309_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Repetition_t1309_0_0_0;
extern Il2CppType Repetition_t1309_1_0_0;
struct Repetition_t1309;
const Il2CppTypeDefinitionMetadata Repetition_t1309_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1305_0_0_0/* parent */
	, Repetition_t1309_VTable/* vtableMethods */
	, Repetition_t1309_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Repetition_t1309_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Repetition"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Repetition_t1309_MethodInfos/* methods */
	, Repetition_t1309_PropertyInfos/* properties */
	, Repetition_t1309_FieldInfos/* fields */
	, NULL/* events */
	, &Repetition_t1309_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Repetition_t1309_0_0_0/* byval_arg */
	, &Repetition_t1309_1_0_0/* this_arg */
	, &Repetition_t1309_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Repetition_t1309)/* instance_size */
	, sizeof (Repetition_t1309)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
extern TypeInfo Assertion_t1298_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
MethodInfo Assertion__ctor_m5820_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Assertion__ctor_m5820/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
MethodInfo Assertion_get_TrueExpression_m5821_MethodInfo = 
{
	"get_TrueExpression"/* name */
	, (methodPointerType)&Assertion_get_TrueExpression_m5821/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo Assertion_t1298_Assertion_set_TrueExpression_m5822_ParameterInfos[] = 
{
	{"value", 0, 134218538, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_TrueExpression_m5822_MethodInfo = 
{
	"set_TrueExpression"/* name */
	, (methodPointerType)&Assertion_set_TrueExpression_m5822/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Assertion_t1298_Assertion_set_TrueExpression_m5822_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
MethodInfo Assertion_get_FalseExpression_m5823_MethodInfo = 
{
	"get_FalseExpression"/* name */
	, (methodPointerType)&Assertion_get_FalseExpression_m5823/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo Assertion_t1298_Assertion_set_FalseExpression_m5824_ParameterInfos[] = 
{
	{"value", 0, 134218539, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_FalseExpression_m5824_MethodInfo = 
{
	"set_FalseExpression"/* name */
	, (methodPointerType)&Assertion_set_FalseExpression_m5824/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Assertion_t1298_Assertion_set_FalseExpression_m5824_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Assertion_t1298_Assertion_GetWidth_m5825_ParameterInfos[] = 
{
	{"min", 0, 134218540, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218541, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo Assertion_GetWidth_m5825_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Assertion_GetWidth_m5825/* method */
	, &Assertion_t1298_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Assertion_t1298_Assertion_GetWidth_m5825_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Assertion_t1298_MethodInfos[] =
{
	&Assertion__ctor_m5820_MethodInfo,
	&Assertion_get_TrueExpression_m5821_MethodInfo,
	&Assertion_set_TrueExpression_m5822_MethodInfo,
	&Assertion_get_FalseExpression_m5823_MethodInfo,
	&Assertion_set_FalseExpression_m5824_MethodInfo,
	&Assertion_GetWidth_m5825_MethodInfo,
	NULL
};
extern MethodInfo Assertion_get_TrueExpression_m5821_MethodInfo;
extern MethodInfo Assertion_set_TrueExpression_m5822_MethodInfo;
static PropertyInfo Assertion_t1298____TrueExpression_PropertyInfo = 
{
	&Assertion_t1298_il2cpp_TypeInfo/* parent */
	, "TrueExpression"/* name */
	, &Assertion_get_TrueExpression_m5821_MethodInfo/* get */
	, &Assertion_set_TrueExpression_m5822_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Assertion_get_FalseExpression_m5823_MethodInfo;
extern MethodInfo Assertion_set_FalseExpression_m5824_MethodInfo;
static PropertyInfo Assertion_t1298____FalseExpression_PropertyInfo = 
{
	&Assertion_t1298_il2cpp_TypeInfo/* parent */
	, "FalseExpression"/* name */
	, &Assertion_get_FalseExpression_m5823_MethodInfo/* get */
	, &Assertion_set_FalseExpression_m5824_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Assertion_t1298_PropertyInfos[] =
{
	&Assertion_t1298____TrueExpression_PropertyInfo,
	&Assertion_t1298____FalseExpression_PropertyInfo,
	NULL
};
extern MethodInfo Assertion_GetWidth_m5825_MethodInfo;
static Il2CppMethodReference Assertion_t1298_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	NULL,
	&Assertion_GetWidth_m5825_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool Assertion_t1298_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Assertion_t1298_1_0_0;
struct Assertion_t1298;
const Il2CppTypeDefinitionMetadata Assertion_t1298_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1305_0_0_0/* parent */
	, Assertion_t1298_VTable/* vtableMethods */
	, Assertion_t1298_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Assertion_t1298_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Assertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Assertion_t1298_MethodInfos/* methods */
	, Assertion_t1298_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Assertion_t1298_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Assertion_t1298_0_0_0/* byval_arg */
	, &Assertion_t1298_1_0_0/* this_arg */
	, &Assertion_t1298_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Assertion_t1298)/* instance_size */
	, sizeof (Assertion_t1298)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern TypeInfo CaptureAssertion_t1311_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern Il2CppType Literal_t1310_0_0_0;
extern Il2CppType Literal_t1310_0_0_0;
static ParameterInfo CaptureAssertion_t1311_CaptureAssertion__ctor_m5826_ParameterInfos[] = 
{
	{"l", 0, 134218542, &EmptyCustomAttributesCache, &Literal_t1310_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
MethodInfo CaptureAssertion__ctor_m5826_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CaptureAssertion__ctor_m5826/* method */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, CaptureAssertion_t1311_CaptureAssertion__ctor_m5826_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1306_0_0_0;
static ParameterInfo CaptureAssertion_t1311_CaptureAssertion_set_CapturingGroup_m5827_ParameterInfos[] = 
{
	{"value", 0, 134218543, &EmptyCustomAttributesCache, &CapturingGroup_t1306_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo CaptureAssertion_set_CapturingGroup_m5827_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&CaptureAssertion_set_CapturingGroup_m5827/* method */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, CaptureAssertion_t1311_CaptureAssertion_set_CapturingGroup_m5827_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CaptureAssertion_t1311_CaptureAssertion_Compile_m5828_ParameterInfos[] = 
{
	{"cmp", 0, 134218544, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218545, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CaptureAssertion_Compile_m5828_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CaptureAssertion_Compile_m5828/* method */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, CaptureAssertion_t1311_CaptureAssertion_Compile_m5828_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
MethodInfo CaptureAssertion_IsComplex_m5829_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CaptureAssertion_IsComplex_m5829/* method */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1300_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
MethodInfo CaptureAssertion_get_Alternate_m5830_MethodInfo = 
{
	"get_Alternate"/* name */
	, (methodPointerType)&CaptureAssertion_get_Alternate_m5830/* method */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionAssertion_t1300_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CaptureAssertion_t1311_MethodInfos[] =
{
	&CaptureAssertion__ctor_m5826_MethodInfo,
	&CaptureAssertion_set_CapturingGroup_m5827_MethodInfo,
	&CaptureAssertion_Compile_m5828_MethodInfo,
	&CaptureAssertion_IsComplex_m5829_MethodInfo,
	&CaptureAssertion_get_Alternate_m5830_MethodInfo,
	NULL
};
extern Il2CppType ExpressionAssertion_t1300_0_0_1;
FieldInfo CaptureAssertion_t1311____alternate_1_FieldInfo = 
{
	"alternate"/* name */
	, &ExpressionAssertion_t1300_0_0_1/* type */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1311, ___alternate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CapturingGroup_t1306_0_0_1;
FieldInfo CaptureAssertion_t1311____group_2_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1306_0_0_1/* type */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1311, ___group_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Literal_t1310_0_0_1;
FieldInfo CaptureAssertion_t1311____literal_3_FieldInfo = 
{
	"literal"/* name */
	, &Literal_t1310_0_0_1/* type */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1311, ___literal_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CaptureAssertion_t1311_FieldInfos[] =
{
	&CaptureAssertion_t1311____alternate_1_FieldInfo,
	&CaptureAssertion_t1311____group_2_FieldInfo,
	&CaptureAssertion_t1311____literal_3_FieldInfo,
	NULL
};
extern MethodInfo CaptureAssertion_set_CapturingGroup_m5827_MethodInfo;
static PropertyInfo CaptureAssertion_t1311____CapturingGroup_PropertyInfo = 
{
	&CaptureAssertion_t1311_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, NULL/* get */
	, &CaptureAssertion_set_CapturingGroup_m5827_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CaptureAssertion_get_Alternate_m5830_MethodInfo;
static PropertyInfo CaptureAssertion_t1311____Alternate_PropertyInfo = 
{
	&CaptureAssertion_t1311_il2cpp_TypeInfo/* parent */
	, "Alternate"/* name */
	, &CaptureAssertion_get_Alternate_m5830_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CaptureAssertion_t1311_PropertyInfos[] =
{
	&CaptureAssertion_t1311____CapturingGroup_PropertyInfo,
	&CaptureAssertion_t1311____Alternate_PropertyInfo,
	NULL
};
extern MethodInfo CaptureAssertion_Compile_m5828_MethodInfo;
extern MethodInfo CaptureAssertion_IsComplex_m5829_MethodInfo;
static Il2CppMethodReference CaptureAssertion_t1311_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&CaptureAssertion_Compile_m5828_MethodInfo,
	&Assertion_GetWidth_m5825_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&CaptureAssertion_IsComplex_m5829_MethodInfo,
};
static bool CaptureAssertion_t1311_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CaptureAssertion_t1311_0_0_0;
extern Il2CppType CaptureAssertion_t1311_1_0_0;
struct CaptureAssertion_t1311;
const Il2CppTypeDefinitionMetadata CaptureAssertion_t1311_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1298_0_0_0/* parent */
	, CaptureAssertion_t1311_VTable/* vtableMethods */
	, CaptureAssertion_t1311_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CaptureAssertion_t1311_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CaptureAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CaptureAssertion_t1311_MethodInfos/* methods */
	, CaptureAssertion_t1311_PropertyInfos/* properties */
	, CaptureAssertion_t1311_FieldInfos/* fields */
	, NULL/* events */
	, &CaptureAssertion_t1311_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CaptureAssertion_t1311_0_0_0/* byval_arg */
	, &CaptureAssertion_t1311_1_0_0/* this_arg */
	, &CaptureAssertion_t1311_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CaptureAssertion_t1311)/* instance_size */
	, sizeof (CaptureAssertion_t1311)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern TypeInfo ExpressionAssertion_t1300_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
MethodInfo ExpressionAssertion__ctor_m5831_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionAssertion__ctor_m5831/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ExpressionAssertion_t1300_ExpressionAssertion_set_Reverse_m5832_ParameterInfos[] = 
{
	{"value", 0, 134218546, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
MethodInfo ExpressionAssertion_set_Reverse_m5832_MethodInfo = 
{
	"set_Reverse"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Reverse_m5832/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232/* invoker_method */
	, ExpressionAssertion_t1300_ExpressionAssertion_set_Reverse_m5832_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ExpressionAssertion_t1300_ExpressionAssertion_set_Negate_m5833_ParameterInfos[] = 
{
	{"value", 0, 134218547, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
MethodInfo ExpressionAssertion_set_Negate_m5833_MethodInfo = 
{
	"set_Negate"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Negate_m5833/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232/* invoker_method */
	, ExpressionAssertion_t1300_ExpressionAssertion_set_Negate_m5833_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
MethodInfo ExpressionAssertion_get_TestExpression_m5834_MethodInfo = 
{
	"get_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_get_TestExpression_m5834/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1299_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo ExpressionAssertion_t1300_ExpressionAssertion_set_TestExpression_m5835_ParameterInfos[] = 
{
	{"value", 0, 134218548, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionAssertion_set_TestExpression_m5835_MethodInfo = 
{
	"set_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_set_TestExpression_m5835/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, ExpressionAssertion_t1300_ExpressionAssertion_set_TestExpression_m5835_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo ExpressionAssertion_t1300_ExpressionAssertion_Compile_m5836_ParameterInfos[] = 
{
	{"cmp", 0, 134218549, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218550, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo ExpressionAssertion_Compile_m5836_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ExpressionAssertion_Compile_m5836/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, ExpressionAssertion_t1300_ExpressionAssertion_Compile_m5836_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
MethodInfo ExpressionAssertion_IsComplex_m5837_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&ExpressionAssertion_IsComplex_m5837/* method */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionAssertion_t1300_MethodInfos[] =
{
	&ExpressionAssertion__ctor_m5831_MethodInfo,
	&ExpressionAssertion_set_Reverse_m5832_MethodInfo,
	&ExpressionAssertion_set_Negate_m5833_MethodInfo,
	&ExpressionAssertion_get_TestExpression_m5834_MethodInfo,
	&ExpressionAssertion_set_TestExpression_m5835_MethodInfo,
	&ExpressionAssertion_Compile_m5836_MethodInfo,
	&ExpressionAssertion_IsComplex_m5837_MethodInfo,
	NULL
};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo ExpressionAssertion_t1300____reverse_1_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1300, ___reverse_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo ExpressionAssertion_t1300____negate_2_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1300, ___negate_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExpressionAssertion_t1300_FieldInfos[] =
{
	&ExpressionAssertion_t1300____reverse_1_FieldInfo,
	&ExpressionAssertion_t1300____negate_2_FieldInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_set_Reverse_m5832_MethodInfo;
static PropertyInfo ExpressionAssertion_t1300____Reverse_PropertyInfo = 
{
	&ExpressionAssertion_t1300_il2cpp_TypeInfo/* parent */
	, "Reverse"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Reverse_m5832_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_set_Negate_m5833_MethodInfo;
static PropertyInfo ExpressionAssertion_t1300____Negate_PropertyInfo = 
{
	&ExpressionAssertion_t1300_il2cpp_TypeInfo/* parent */
	, "Negate"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Negate_m5833_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_get_TestExpression_m5834_MethodInfo;
extern MethodInfo ExpressionAssertion_set_TestExpression_m5835_MethodInfo;
static PropertyInfo ExpressionAssertion_t1300____TestExpression_PropertyInfo = 
{
	&ExpressionAssertion_t1300_il2cpp_TypeInfo/* parent */
	, "TestExpression"/* name */
	, &ExpressionAssertion_get_TestExpression_m5834_MethodInfo/* get */
	, &ExpressionAssertion_set_TestExpression_m5835_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionAssertion_t1300_PropertyInfos[] =
{
	&ExpressionAssertion_t1300____Reverse_PropertyInfo,
	&ExpressionAssertion_t1300____Negate_PropertyInfo,
	&ExpressionAssertion_t1300____TestExpression_PropertyInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_Compile_m5836_MethodInfo;
extern MethodInfo ExpressionAssertion_IsComplex_m5837_MethodInfo;
static Il2CppMethodReference ExpressionAssertion_t1300_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&ExpressionAssertion_Compile_m5836_MethodInfo,
	&Assertion_GetWidth_m5825_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&ExpressionAssertion_IsComplex_m5837_MethodInfo,
};
static bool ExpressionAssertion_t1300_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionAssertion_t1300_1_0_0;
struct ExpressionAssertion_t1300;
const Il2CppTypeDefinitionMetadata ExpressionAssertion_t1300_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1298_0_0_0/* parent */
	, ExpressionAssertion_t1300_VTable/* vtableMethods */
	, ExpressionAssertion_t1300_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionAssertion_t1300_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionAssertion_t1300_MethodInfos/* methods */
	, ExpressionAssertion_t1300_PropertyInfos/* properties */
	, ExpressionAssertion_t1300_FieldInfos/* fields */
	, NULL/* events */
	, &ExpressionAssertion_t1300_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExpressionAssertion_t1300_0_0_0/* byval_arg */
	, &ExpressionAssertion_t1300_1_0_0/* this_arg */
	, &ExpressionAssertion_t1300_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionAssertion_t1300)/* instance_size */
	, sizeof (ExpressionAssertion_t1300)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
extern TypeInfo Alternation_t1312_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
MethodInfo Alternation__ctor_m5838_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Alternation__ctor_m5838/* method */
	, &Alternation_t1312_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1302_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
MethodInfo Alternation_get_Alternatives_m5839_MethodInfo = 
{
	"get_Alternatives"/* name */
	, (methodPointerType)&Alternation_get_Alternatives_m5839/* method */
	, &Alternation_t1312_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1302_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
static ParameterInfo Alternation_t1312_Alternation_AddAlternative_m5840_ParameterInfos[] = 
{
	{"e", 0, 134218551, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Alternation_AddAlternative_m5840_MethodInfo = 
{
	"AddAlternative"/* name */
	, (methodPointerType)&Alternation_AddAlternative_m5840/* method */
	, &Alternation_t1312_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Alternation_t1312_Alternation_AddAlternative_m5840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Alternation_t1312_Alternation_Compile_m5841_ParameterInfos[] = 
{
	{"cmp", 0, 134218552, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218553, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Alternation_Compile_m5841_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Alternation_Compile_m5841/* method */
	, &Alternation_t1312_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Alternation_t1312_Alternation_Compile_m5841_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Alternation_t1312_Alternation_GetWidth_m5842_ParameterInfos[] = 
{
	{"min", 0, 134218554, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218555, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
MethodInfo Alternation_GetWidth_m5842_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Alternation_GetWidth_m5842/* method */
	, &Alternation_t1312_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Alternation_t1312_Alternation_GetWidth_m5842_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Alternation_t1312_MethodInfos[] =
{
	&Alternation__ctor_m5838_MethodInfo,
	&Alternation_get_Alternatives_m5839_MethodInfo,
	&Alternation_AddAlternative_m5840_MethodInfo,
	&Alternation_Compile_m5841_MethodInfo,
	&Alternation_GetWidth_m5842_MethodInfo,
	NULL
};
extern MethodInfo Alternation_get_Alternatives_m5839_MethodInfo;
static PropertyInfo Alternation_t1312____Alternatives_PropertyInfo = 
{
	&Alternation_t1312_il2cpp_TypeInfo/* parent */
	, "Alternatives"/* name */
	, &Alternation_get_Alternatives_m5839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Alternation_t1312_PropertyInfos[] =
{
	&Alternation_t1312____Alternatives_PropertyInfo,
	NULL
};
extern MethodInfo Alternation_Compile_m5841_MethodInfo;
extern MethodInfo Alternation_GetWidth_m5842_MethodInfo;
static Il2CppMethodReference Alternation_t1312_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Alternation_Compile_m5841_MethodInfo,
	&Alternation_GetWidth_m5842_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&CompositeExpression_IsComplex_m5789_MethodInfo,
};
static bool Alternation_t1312_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Alternation_t1312_0_0_0;
extern Il2CppType Alternation_t1312_1_0_0;
struct Alternation_t1312;
const Il2CppTypeDefinitionMetadata Alternation_t1312_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1305_0_0_0/* parent */
	, Alternation_t1312_VTable/* vtableMethods */
	, Alternation_t1312_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Alternation_t1312_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Alternation"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Alternation_t1312_MethodInfos/* methods */
	, Alternation_t1312_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Alternation_t1312_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Alternation_t1312_0_0_0/* byval_arg */
	, &Alternation_t1312_1_0_0/* this_arg */
	, &Alternation_t1312_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Alternation_t1312)/* instance_size */
	, sizeof (Alternation_t1312)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern TypeInfo Literal_t1310_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Literal_t1310_Literal__ctor_m5843_ParameterInfos[] = 
{
	{"str", 0, 134218556, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218557, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
MethodInfo Literal__ctor_m5843_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Literal__ctor_m5843/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Literal_t1310_Literal__ctor_m5843_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Literal_t1310_Literal_CompileLiteral_m5844_ParameterInfos[] = 
{
	{"str", 0, 134218558, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"cmp", 1, 134218559, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"ignore", 2, 134218560, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"reverse", 3, 134218561, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
MethodInfo Literal_CompileLiteral_m5844_MethodInfo = 
{
	"CompileLiteral"/* name */
	, (methodPointerType)&Literal_CompileLiteral_m5844/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t_SByte_t232_SByte_t232/* invoker_method */
	, Literal_t1310_Literal_CompileLiteral_m5844_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Literal_t1310_Literal_Compile_m5845_ParameterInfos[] = 
{
	{"cmp", 0, 134218562, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218563, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Literal_Compile_m5845_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Literal_Compile_m5845/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Literal_t1310_Literal_Compile_m5845_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Literal_t1310_Literal_GetWidth_m5846_ParameterInfos[] = 
{
	{"min", 0, 134218564, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218565, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
MethodInfo Literal_GetWidth_m5846_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Literal_GetWidth_m5846/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Literal_t1310_Literal_GetWidth_m5846_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Literal_t1310_Literal_GetAnchorInfo_m5847_ParameterInfos[] = 
{
	{"reverse", 0, 134218566, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
MethodInfo Literal_GetAnchorInfo_m5847_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Literal_GetAnchorInfo_m5847/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t232/* invoker_method */
	, Literal_t1310_Literal_GetAnchorInfo_m5847_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
MethodInfo Literal_IsComplex_m5848_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Literal_IsComplex_m5848/* method */
	, &Literal_t1310_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Literal_t1310_MethodInfos[] =
{
	&Literal__ctor_m5843_MethodInfo,
	&Literal_CompileLiteral_m5844_MethodInfo,
	&Literal_Compile_m5845_MethodInfo,
	&Literal_GetWidth_m5846_MethodInfo,
	&Literal_GetAnchorInfo_m5847_MethodInfo,
	&Literal_IsComplex_m5848_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Literal_t1310____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &Literal_t1310_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1310, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Literal_t1310____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Literal_t1310_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1310, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Literal_t1310_FieldInfos[] =
{
	&Literal_t1310____str_0_FieldInfo,
	&Literal_t1310____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Literal_Compile_m5845_MethodInfo;
extern MethodInfo Literal_GetWidth_m5846_MethodInfo;
extern MethodInfo Literal_GetAnchorInfo_m5847_MethodInfo;
extern MethodInfo Literal_IsComplex_m5848_MethodInfo;
static Il2CppMethodReference Literal_t1310_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Literal_Compile_m5845_MethodInfo,
	&Literal_GetWidth_m5846_MethodInfo,
	&Literal_GetAnchorInfo_m5847_MethodInfo,
	&Literal_IsComplex_m5848_MethodInfo,
};
static bool Literal_t1310_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Literal_t1310_1_0_0;
struct Literal_t1310;
const Il2CppTypeDefinitionMetadata Literal_t1310_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1299_0_0_0/* parent */
	, Literal_t1310_VTable/* vtableMethods */
	, Literal_t1310_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Literal_t1310_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Literal"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Literal_t1310_MethodInfos/* methods */
	, NULL/* properties */
	, Literal_t1310_FieldInfos/* fields */
	, NULL/* events */
	, &Literal_t1310_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Literal_t1310_0_0_0/* byval_arg */
	, &Literal_t1310_1_0_0/* this_arg */
	, &Literal_t1310_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Literal_t1310)/* instance_size */
	, sizeof (Literal_t1310)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern TypeInfo PositionAssertion_t1313_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
extern Il2CppType Position_t1271_0_0_0;
static ParameterInfo PositionAssertion_t1313_PositionAssertion__ctor_m5849_ParameterInfos[] = 
{
	{"pos", 0, 134218567, &EmptyCustomAttributesCache, &Position_t1271_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
MethodInfo PositionAssertion__ctor_m5849_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PositionAssertion__ctor_m5849/* method */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915/* invoker_method */
	, PositionAssertion_t1313_PositionAssertion__ctor_m5849_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PositionAssertion_t1313_PositionAssertion_Compile_m5850_ParameterInfos[] = 
{
	{"cmp", 0, 134218568, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218569, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo PositionAssertion_Compile_m5850_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&PositionAssertion_Compile_m5850/* method */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, PositionAssertion_t1313_PositionAssertion_Compile_m5850_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo PositionAssertion_t1313_PositionAssertion_GetWidth_m5851_ParameterInfos[] = 
{
	{"min", 0, 134218570, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218571, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo PositionAssertion_GetWidth_m5851_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&PositionAssertion_GetWidth_m5851/* method */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, PositionAssertion_t1313_PositionAssertion_GetWidth_m5851_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
MethodInfo PositionAssertion_IsComplex_m5852_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&PositionAssertion_IsComplex_m5852/* method */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo PositionAssertion_t1313_PositionAssertion_GetAnchorInfo_m5853_ParameterInfos[] = 
{
	{"revers", 0, 134218572, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
MethodInfo PositionAssertion_GetAnchorInfo_m5853_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&PositionAssertion_GetAnchorInfo_m5853/* method */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t232/* invoker_method */
	, PositionAssertion_t1313_PositionAssertion_GetAnchorInfo_m5853_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PositionAssertion_t1313_MethodInfos[] =
{
	&PositionAssertion__ctor_m5849_MethodInfo,
	&PositionAssertion_Compile_m5850_MethodInfo,
	&PositionAssertion_GetWidth_m5851_MethodInfo,
	&PositionAssertion_IsComplex_m5852_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m5853_MethodInfo,
	NULL
};
extern Il2CppType Position_t1271_0_0_1;
FieldInfo PositionAssertion_t1313____pos_0_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1271_0_0_1/* type */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* parent */
	, offsetof(PositionAssertion_t1313, ___pos_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PositionAssertion_t1313_FieldInfos[] =
{
	&PositionAssertion_t1313____pos_0_FieldInfo,
	NULL
};
extern MethodInfo PositionAssertion_Compile_m5850_MethodInfo;
extern MethodInfo PositionAssertion_GetWidth_m5851_MethodInfo;
extern MethodInfo PositionAssertion_GetAnchorInfo_m5853_MethodInfo;
extern MethodInfo PositionAssertion_IsComplex_m5852_MethodInfo;
static Il2CppMethodReference PositionAssertion_t1313_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&PositionAssertion_Compile_m5850_MethodInfo,
	&PositionAssertion_GetWidth_m5851_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m5853_MethodInfo,
	&PositionAssertion_IsComplex_m5852_MethodInfo,
};
static bool PositionAssertion_t1313_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PositionAssertion_t1313_0_0_0;
extern Il2CppType PositionAssertion_t1313_1_0_0;
struct PositionAssertion_t1313;
const Il2CppTypeDefinitionMetadata PositionAssertion_t1313_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1299_0_0_0/* parent */
	, PositionAssertion_t1313_VTable/* vtableMethods */
	, PositionAssertion_t1313_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PositionAssertion_t1313_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PositionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, PositionAssertion_t1313_MethodInfos/* methods */
	, NULL/* properties */
	, PositionAssertion_t1313_FieldInfos/* fields */
	, NULL/* events */
	, &PositionAssertion_t1313_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PositionAssertion_t1313_0_0_0/* byval_arg */
	, &PositionAssertion_t1313_1_0_0/* this_arg */
	, &PositionAssertion_t1313_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PositionAssertion_t1313)/* instance_size */
	, sizeof (PositionAssertion_t1313)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern TypeInfo Reference_t1314_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Reference_t1314_Reference__ctor_m5854_ParameterInfos[] = 
{
	{"ignore", 0, 134218573, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
MethodInfo Reference__ctor_m5854_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Reference__ctor_m5854/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232/* invoker_method */
	, Reference_t1314_Reference__ctor_m5854_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1306_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
MethodInfo Reference_get_CapturingGroup_m5855_MethodInfo = 
{
	"get_CapturingGroup"/* name */
	, (methodPointerType)&Reference_get_CapturingGroup_m5855/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &CapturingGroup_t1306_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1306_0_0_0;
static ParameterInfo Reference_t1314_Reference_set_CapturingGroup_m5856_ParameterInfos[] = 
{
	{"value", 0, 134218574, &EmptyCustomAttributesCache, &CapturingGroup_t1306_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo Reference_set_CapturingGroup_m5856_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&Reference_set_CapturingGroup_m5856/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Reference_t1314_Reference_set_CapturingGroup_m5856_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
MethodInfo Reference_get_IgnoreCase_m5857_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&Reference_get_IgnoreCase_m5857/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Reference_t1314_Reference_Compile_m5858_ParameterInfos[] = 
{
	{"cmp", 0, 134218575, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218576, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Reference_Compile_m5858_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Reference_Compile_m5858/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Reference_t1314_Reference_Compile_m5858_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo Reference_t1314_Reference_GetWidth_m5859_ParameterInfos[] = 
{
	{"min", 0, 134218577, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218578, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
MethodInfo Reference_GetWidth_m5859_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Reference_GetWidth_m5859/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, Reference_t1314_Reference_GetWidth_m5859_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
MethodInfo Reference_IsComplex_m5860_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Reference_IsComplex_m5860/* method */
	, &Reference_t1314_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Reference_t1314_MethodInfos[] =
{
	&Reference__ctor_m5854_MethodInfo,
	&Reference_get_CapturingGroup_m5855_MethodInfo,
	&Reference_set_CapturingGroup_m5856_MethodInfo,
	&Reference_get_IgnoreCase_m5857_MethodInfo,
	&Reference_Compile_m5858_MethodInfo,
	&Reference_GetWidth_m5859_MethodInfo,
	&Reference_IsComplex_m5860_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1306_0_0_1;
FieldInfo Reference_t1314____group_0_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1306_0_0_1/* type */
	, &Reference_t1314_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1314, ___group_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Reference_t1314____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Reference_t1314_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1314, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Reference_t1314_FieldInfos[] =
{
	&Reference_t1314____group_0_FieldInfo,
	&Reference_t1314____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Reference_get_CapturingGroup_m5855_MethodInfo;
extern MethodInfo Reference_set_CapturingGroup_m5856_MethodInfo;
static PropertyInfo Reference_t1314____CapturingGroup_PropertyInfo = 
{
	&Reference_t1314_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, &Reference_get_CapturingGroup_m5855_MethodInfo/* get */
	, &Reference_set_CapturingGroup_m5856_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Reference_get_IgnoreCase_m5857_MethodInfo;
static PropertyInfo Reference_t1314____IgnoreCase_PropertyInfo = 
{
	&Reference_t1314_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &Reference_get_IgnoreCase_m5857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Reference_t1314_PropertyInfos[] =
{
	&Reference_t1314____CapturingGroup_PropertyInfo,
	&Reference_t1314____IgnoreCase_PropertyInfo,
	NULL
};
extern MethodInfo Reference_Compile_m5858_MethodInfo;
extern MethodInfo Reference_GetWidth_m5859_MethodInfo;
extern MethodInfo Reference_IsComplex_m5860_MethodInfo;
static Il2CppMethodReference Reference_t1314_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&Reference_Compile_m5858_MethodInfo,
	&Reference_GetWidth_m5859_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&Reference_IsComplex_m5860_MethodInfo,
};
static bool Reference_t1314_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Reference_t1314_0_0_0;
extern Il2CppType Reference_t1314_1_0_0;
struct Reference_t1314;
const Il2CppTypeDefinitionMetadata Reference_t1314_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1299_0_0_0/* parent */
	, Reference_t1314_VTable/* vtableMethods */
	, Reference_t1314_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Reference_t1314_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Reference"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Reference_t1314_MethodInfos/* methods */
	, Reference_t1314_PropertyInfos/* properties */
	, Reference_t1314_FieldInfos/* fields */
	, NULL/* events */
	, &Reference_t1314_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Reference_t1314_0_0_0/* byval_arg */
	, &Reference_t1314_1_0_0/* this_arg */
	, &Reference_t1314_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Reference_t1314)/* instance_size */
	, sizeof (Reference_t1314)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern TypeInfo BackslashNumber_t1315_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo BackslashNumber_t1315_BackslashNumber__ctor_m5861_ParameterInfos[] = 
{
	{"ignore", 0, 134218579, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ecma", 1, 134218580, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
MethodInfo BackslashNumber__ctor_m5861_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BackslashNumber__ctor_m5861/* method */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232_SByte_t232/* invoker_method */
	, BackslashNumber_t1315_BackslashNumber__ctor_m5861_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Hashtable_t1149_0_0_0;
static ParameterInfo BackslashNumber_t1315_BackslashNumber_ResolveReference_m5862_ParameterInfos[] = 
{
	{"num_str", 0, 134218581, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"groups", 1, 134218582, &EmptyCustomAttributesCache, &Hashtable_t1149_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
MethodInfo BackslashNumber_ResolveReference_m5862_MethodInfo = 
{
	"ResolveReference"/* name */
	, (methodPointerType)&BackslashNumber_ResolveReference_m5862/* method */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t_Object_t/* invoker_method */
	, BackslashNumber_t1315_BackslashNumber_ResolveReference_m5862_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo BackslashNumber_t1315_BackslashNumber_Compile_m5863_ParameterInfos[] = 
{
	{"cmp", 0, 134218583, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218584, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BackslashNumber_Compile_m5863_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BackslashNumber_Compile_m5863/* method */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, BackslashNumber_t1315_BackslashNumber_Compile_m5863_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BackslashNumber_t1315_MethodInfos[] =
{
	&BackslashNumber__ctor_m5861_MethodInfo,
	&BackslashNumber_ResolveReference_m5862_MethodInfo,
	&BackslashNumber_Compile_m5863_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo BackslashNumber_t1315____literal_2_FieldInfo = 
{
	"literal"/* name */
	, &String_t_0_0_1/* type */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1315, ___literal_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo BackslashNumber_t1315____ecma_3_FieldInfo = 
{
	"ecma"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1315, ___ecma_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BackslashNumber_t1315_FieldInfos[] =
{
	&BackslashNumber_t1315____literal_2_FieldInfo,
	&BackslashNumber_t1315____ecma_3_FieldInfo,
	NULL
};
extern MethodInfo BackslashNumber_Compile_m5863_MethodInfo;
static Il2CppMethodReference BackslashNumber_t1315_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&BackslashNumber_Compile_m5863_MethodInfo,
	&Reference_GetWidth_m5859_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&Reference_IsComplex_m5860_MethodInfo,
};
static bool BackslashNumber_t1315_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BackslashNumber_t1315_0_0_0;
extern Il2CppType BackslashNumber_t1315_1_0_0;
struct BackslashNumber_t1315;
const Il2CppTypeDefinitionMetadata BackslashNumber_t1315_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Reference_t1314_0_0_0/* parent */
	, BackslashNumber_t1315_VTable/* vtableMethods */
	, BackslashNumber_t1315_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BackslashNumber_t1315_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BackslashNumber"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BackslashNumber_t1315_MethodInfos/* methods */
	, NULL/* properties */
	, BackslashNumber_t1315_FieldInfos/* fields */
	, NULL/* events */
	, &BackslashNumber_t1315_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BackslashNumber_t1315_0_0_0/* byval_arg */
	, &BackslashNumber_t1315_1_0_0/* this_arg */
	, &BackslashNumber_t1315_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BackslashNumber_t1315)/* instance_size */
	, sizeof (BackslashNumber_t1315)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern TypeInfo CharacterClass_t1316_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass__ctor_m5864_ParameterInfos[] = 
{
	{"negate", 0, 134218585, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"ignore", 1, 134218586, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
MethodInfo CharacterClass__ctor_m5864_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m5864/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_SByte_t232_SByte_t232/* invoker_method */
	, CharacterClass_t1316_CharacterClass__ctor_m5864_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass__ctor_m5865_ParameterInfos[] = 
{
	{"cat", 0, 134218587, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218588, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass__ctor_m5865_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m5865/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232/* invoker_method */
	, CharacterClass_t1316_CharacterClass__ctor_m5865_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
MethodInfo CharacterClass__cctor_m5866_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CharacterClass__cctor_m5866/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1275_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass_AddCategory_m5867_ParameterInfos[] = 
{
	{"cat", 0, 134218589, &EmptyCustomAttributesCache, &Category_t1275_0_0_0},
	{"negate", 1, 134218590, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass_AddCategory_m5867_MethodInfo = 
{
	"AddCategory"/* name */
	, (methodPointerType)&CharacterClass_AddCategory_m5867/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_UInt16_t915_SByte_t232/* invoker_method */
	, CharacterClass_t1316_CharacterClass_AddCategory_m5867_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass_AddCharacter_m5868_ParameterInfos[] = 
{
	{"c", 0, 134218591, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
MethodInfo CharacterClass_AddCharacter_m5868_MethodInfo = 
{
	"AddCharacter"/* name */
	, (methodPointerType)&CharacterClass_AddCharacter_m5868/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596/* invoker_method */
	, CharacterClass_t1316_CharacterClass_AddCharacter_m5868_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass_AddRange_m5869_ParameterInfos[] = 
{
	{"lo", 0, 134218592, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
	{"hi", 1, 134218593, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int16_t596_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
MethodInfo CharacterClass_AddRange_m5869_MethodInfo = 
{
	"AddRange"/* name */
	, (methodPointerType)&CharacterClass_AddRange_m5869/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int16_t596_Int16_t596/* invoker_method */
	, CharacterClass_t1316_CharacterClass_AddRange_m5869_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1303_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass_Compile_m5870_ParameterInfos[] = 
{
	{"cmp", 0, 134218594, &EmptyCustomAttributesCache, &ICompiler_t1303_0_0_0},
	{"reverse", 1, 134218595, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CharacterClass_Compile_m5870_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CharacterClass_Compile_m5870/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, CharacterClass_t1316_CharacterClass_Compile_m5870_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_1_0_2;
extern Il2CppType Int32_t188_1_0_2;
static ParameterInfo CharacterClass_t1316_CharacterClass_GetWidth_m5871_ParameterInfos[] = 
{
	{"min", 0, 134218596, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
	{"max", 1, 134218597, &EmptyCustomAttributesCache, &Int32_t188_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
MethodInfo CharacterClass_GetWidth_m5871_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CharacterClass_GetWidth_m5871/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32U26_t597_Int32U26_t597/* invoker_method */
	, CharacterClass_t1316_CharacterClass_GetWidth_m5871_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
MethodInfo CharacterClass_IsComplex_m5872_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CharacterClass_IsComplex_m5872/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1291_0_0_0;
static ParameterInfo CharacterClass_t1316_CharacterClass_GetIntervalCost_m5873_ParameterInfos[] = 
{
	{"i", 0, 134218598, &EmptyCustomAttributesCache, &Interval_t1291_0_0_0},
};
extern Il2CppType Double_t923_0_0_0;
extern void* RuntimeInvoker_Double_t923_Interval_t1291 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
MethodInfo CharacterClass_GetIntervalCost_m5873_MethodInfo = 
{
	"GetIntervalCost"/* name */
	, (methodPointerType)&CharacterClass_GetIntervalCost_m5873/* method */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* declaring_type */
	, &Double_t923_0_0_0/* return_type */
	, RuntimeInvoker_Double_t923_Interval_t1291/* invoker_method */
	, CharacterClass_t1316_CharacterClass_GetIntervalCost_m5873_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CharacterClass_t1316_MethodInfos[] =
{
	&CharacterClass__ctor_m5864_MethodInfo,
	&CharacterClass__ctor_m5865_MethodInfo,
	&CharacterClass__cctor_m5866_MethodInfo,
	&CharacterClass_AddCategory_m5867_MethodInfo,
	&CharacterClass_AddCharacter_m5868_MethodInfo,
	&CharacterClass_AddRange_m5869_MethodInfo,
	&CharacterClass_Compile_m5870_MethodInfo,
	&CharacterClass_GetWidth_m5871_MethodInfo,
	&CharacterClass_IsComplex_m5872_MethodInfo,
	&CharacterClass_GetIntervalCost_m5873_MethodInfo,
	NULL
};
extern Il2CppType Interval_t1291_0_0_17;
FieldInfo CharacterClass_t1316____upper_case_characters_0_FieldInfo = 
{
	"upper_case_characters"/* name */
	, &Interval_t1291_0_0_17/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316_StaticFields, ___upper_case_characters_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo CharacterClass_t1316____negate_1_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316, ___negate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo CharacterClass_t1316____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1283_0_0_1;
FieldInfo CharacterClass_t1316____pos_cats_3_FieldInfo = 
{
	"pos_cats"/* name */
	, &BitArray_t1283_0_0_1/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316, ___pos_cats_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1283_0_0_1;
FieldInfo CharacterClass_t1316____neg_cats_4_FieldInfo = 
{
	"neg_cats"/* name */
	, &BitArray_t1283_0_0_1/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316, ___neg_cats_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntervalCollection_t1294_0_0_1;
FieldInfo CharacterClass_t1316____intervals_5_FieldInfo = 
{
	"intervals"/* name */
	, &IntervalCollection_t1294_0_0_1/* type */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1316, ___intervals_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CharacterClass_t1316_FieldInfos[] =
{
	&CharacterClass_t1316____upper_case_characters_0_FieldInfo,
	&CharacterClass_t1316____negate_1_FieldInfo,
	&CharacterClass_t1316____ignore_2_FieldInfo,
	&CharacterClass_t1316____pos_cats_3_FieldInfo,
	&CharacterClass_t1316____neg_cats_4_FieldInfo,
	&CharacterClass_t1316____intervals_5_FieldInfo,
	NULL
};
extern MethodInfo CharacterClass_Compile_m5870_MethodInfo;
extern MethodInfo CharacterClass_GetWidth_m5871_MethodInfo;
extern MethodInfo CharacterClass_IsComplex_m5872_MethodInfo;
static Il2CppMethodReference CharacterClass_t1316_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&CharacterClass_Compile_m5870_MethodInfo,
	&CharacterClass_GetWidth_m5871_MethodInfo,
	&Expression_GetAnchorInfo_m5785_MethodInfo,
	&CharacterClass_IsComplex_m5872_MethodInfo,
};
static bool CharacterClass_t1316_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CharacterClass_t1316_0_0_0;
extern Il2CppType CharacterClass_t1316_1_0_0;
struct CharacterClass_t1316;
const Il2CppTypeDefinitionMetadata CharacterClass_t1316_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1299_0_0_0/* parent */
	, CharacterClass_t1316_VTable/* vtableMethods */
	, CharacterClass_t1316_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CharacterClass_t1316_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterClass"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CharacterClass_t1316_MethodInfos/* methods */
	, NULL/* properties */
	, CharacterClass_t1316_FieldInfos/* fields */
	, NULL/* events */
	, &CharacterClass_t1316_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CharacterClass_t1316_0_0_0/* byval_arg */
	, &CharacterClass_t1316_1_0_0/* this_arg */
	, &CharacterClass_t1316_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CharacterClass_t1316)/* instance_size */
	, sizeof (CharacterClass_t1316)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CharacterClass_t1316_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern TypeInfo AnchorInfo_t1304_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern Il2CppType Expression_t1299_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo AnchorInfo_t1304_AnchorInfo__ctor_m5874_ParameterInfos[] = 
{
	{"expr", 0, 134218599, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
	{"width", 1, 134218600, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
MethodInfo AnchorInfo__ctor_m5874_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m5874/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188/* invoker_method */
	, AnchorInfo_t1304_AnchorInfo__ctor_m5874_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo AnchorInfo_t1304_AnchorInfo__ctor_m5875_ParameterInfos[] = 
{
	{"expr", 0, 134218601, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
	{"offset", 1, 134218602, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"width", 2, 134218603, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"str", 3, 134218604, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 4, 134218605, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
MethodInfo AnchorInfo__ctor_m5875_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m5875/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_Object_t_SByte_t232/* invoker_method */
	, AnchorInfo_t1304_AnchorInfo__ctor_m5875_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1299_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
extern Il2CppType Position_t1271_0_0_0;
static ParameterInfo AnchorInfo_t1304_AnchorInfo__ctor_m5876_ParameterInfos[] = 
{
	{"expr", 0, 134218606, &EmptyCustomAttributesCache, &Expression_t1299_0_0_0},
	{"offset", 1, 134218607, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"width", 2, 134218608, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
	{"pos", 3, 134218609, &EmptyCustomAttributesCache, &Position_t1271_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_UInt16_t915 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
MethodInfo AnchorInfo__ctor_m5876_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m5876/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188_Int32_t188_UInt16_t915/* invoker_method */
	, AnchorInfo_t1304_AnchorInfo__ctor_m5876_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
MethodInfo AnchorInfo_get_Offset_m5877_MethodInfo = 
{
	"get_Offset"/* name */
	, (methodPointerType)&AnchorInfo_get_Offset_m5877/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
MethodInfo AnchorInfo_get_Width_m5878_MethodInfo = 
{
	"get_Width"/* name */
	, (methodPointerType)&AnchorInfo_get_Width_m5878/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
MethodInfo AnchorInfo_get_Length_m5879_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&AnchorInfo_get_Length_m5879/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
MethodInfo AnchorInfo_get_IsUnknownWidth_m5880_MethodInfo = 
{
	"get_IsUnknownWidth"/* name */
	, (methodPointerType)&AnchorInfo_get_IsUnknownWidth_m5880/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
MethodInfo AnchorInfo_get_IsComplete_m5881_MethodInfo = 
{
	"get_IsComplete"/* name */
	, (methodPointerType)&AnchorInfo_get_IsComplete_m5881/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
MethodInfo AnchorInfo_get_Substring_m5882_MethodInfo = 
{
	"get_Substring"/* name */
	, (methodPointerType)&AnchorInfo_get_Substring_m5882/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
MethodInfo AnchorInfo_get_IgnoreCase_m5883_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&AnchorInfo_get_IgnoreCase_m5883/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1271_0_0_0;
extern void* RuntimeInvoker_Position_t1271 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
MethodInfo AnchorInfo_get_Position_m5884_MethodInfo = 
{
	"get_Position"/* name */
	, (methodPointerType)&AnchorInfo_get_Position_m5884/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1271_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1271/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
MethodInfo AnchorInfo_get_IsSubstring_m5885_MethodInfo = 
{
	"get_IsSubstring"/* name */
	, (methodPointerType)&AnchorInfo_get_IsSubstring_m5885/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
MethodInfo AnchorInfo_get_IsPosition_m5886_MethodInfo = 
{
	"get_IsPosition"/* name */
	, (methodPointerType)&AnchorInfo_get_IsPosition_m5886/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo AnchorInfo_t1304_AnchorInfo_GetInterval_m5887_ParameterInfos[] = 
{
	{"start", 0, 134218610, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Interval_t1291_0_0_0;
extern void* RuntimeInvoker_Interval_t1291_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
MethodInfo AnchorInfo_GetInterval_m5887_MethodInfo = 
{
	"GetInterval"/* name */
	, (methodPointerType)&AnchorInfo_GetInterval_m5887/* method */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1291_Int32_t188/* invoker_method */
	, AnchorInfo_t1304_AnchorInfo_GetInterval_m5887_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AnchorInfo_t1304_MethodInfos[] =
{
	&AnchorInfo__ctor_m5874_MethodInfo,
	&AnchorInfo__ctor_m5875_MethodInfo,
	&AnchorInfo__ctor_m5876_MethodInfo,
	&AnchorInfo_get_Offset_m5877_MethodInfo,
	&AnchorInfo_get_Width_m5878_MethodInfo,
	&AnchorInfo_get_Length_m5879_MethodInfo,
	&AnchorInfo_get_IsUnknownWidth_m5880_MethodInfo,
	&AnchorInfo_get_IsComplete_m5881_MethodInfo,
	&AnchorInfo_get_Substring_m5882_MethodInfo,
	&AnchorInfo_get_IgnoreCase_m5883_MethodInfo,
	&AnchorInfo_get_Position_m5884_MethodInfo,
	&AnchorInfo_get_IsSubstring_m5885_MethodInfo,
	&AnchorInfo_get_IsPosition_m5886_MethodInfo,
	&AnchorInfo_GetInterval_m5887_MethodInfo,
	NULL
};
extern Il2CppType Expression_t1299_0_0_1;
FieldInfo AnchorInfo_t1304____expr_0_FieldInfo = 
{
	"expr"/* name */
	, &Expression_t1299_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___expr_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Position_t1271_0_0_1;
FieldInfo AnchorInfo_t1304____pos_1_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1271_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___pos_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo AnchorInfo_t1304____offset_2_FieldInfo = 
{
	"offset"/* name */
	, &Int32_t188_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___offset_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo AnchorInfo_t1304____str_3_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___str_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo AnchorInfo_t1304____width_4_FieldInfo = 
{
	"width"/* name */
	, &Int32_t188_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___width_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo AnchorInfo_t1304____ignore_5_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1304, ___ignore_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* AnchorInfo_t1304_FieldInfos[] =
{
	&AnchorInfo_t1304____expr_0_FieldInfo,
	&AnchorInfo_t1304____pos_1_FieldInfo,
	&AnchorInfo_t1304____offset_2_FieldInfo,
	&AnchorInfo_t1304____str_3_FieldInfo,
	&AnchorInfo_t1304____width_4_FieldInfo,
	&AnchorInfo_t1304____ignore_5_FieldInfo,
	NULL
};
extern MethodInfo AnchorInfo_get_Offset_m5877_MethodInfo;
static PropertyInfo AnchorInfo_t1304____Offset_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "Offset"/* name */
	, &AnchorInfo_get_Offset_m5877_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Width_m5878_MethodInfo;
static PropertyInfo AnchorInfo_t1304____Width_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "Width"/* name */
	, &AnchorInfo_get_Width_m5878_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Length_m5879_MethodInfo;
static PropertyInfo AnchorInfo_t1304____Length_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &AnchorInfo_get_Length_m5879_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsUnknownWidth_m5880_MethodInfo;
static PropertyInfo AnchorInfo_t1304____IsUnknownWidth_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "IsUnknownWidth"/* name */
	, &AnchorInfo_get_IsUnknownWidth_m5880_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsComplete_m5881_MethodInfo;
static PropertyInfo AnchorInfo_t1304____IsComplete_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "IsComplete"/* name */
	, &AnchorInfo_get_IsComplete_m5881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Substring_m5882_MethodInfo;
static PropertyInfo AnchorInfo_t1304____Substring_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "Substring"/* name */
	, &AnchorInfo_get_Substring_m5882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IgnoreCase_m5883_MethodInfo;
static PropertyInfo AnchorInfo_t1304____IgnoreCase_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &AnchorInfo_get_IgnoreCase_m5883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Position_m5884_MethodInfo;
static PropertyInfo AnchorInfo_t1304____Position_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "Position"/* name */
	, &AnchorInfo_get_Position_m5884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsSubstring_m5885_MethodInfo;
static PropertyInfo AnchorInfo_t1304____IsSubstring_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "IsSubstring"/* name */
	, &AnchorInfo_get_IsSubstring_m5885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsPosition_m5886_MethodInfo;
static PropertyInfo AnchorInfo_t1304____IsPosition_PropertyInfo = 
{
	&AnchorInfo_t1304_il2cpp_TypeInfo/* parent */
	, "IsPosition"/* name */
	, &AnchorInfo_get_IsPosition_m5886_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* AnchorInfo_t1304_PropertyInfos[] =
{
	&AnchorInfo_t1304____Offset_PropertyInfo,
	&AnchorInfo_t1304____Width_PropertyInfo,
	&AnchorInfo_t1304____Length_PropertyInfo,
	&AnchorInfo_t1304____IsUnknownWidth_PropertyInfo,
	&AnchorInfo_t1304____IsComplete_PropertyInfo,
	&AnchorInfo_t1304____Substring_PropertyInfo,
	&AnchorInfo_t1304____IgnoreCase_PropertyInfo,
	&AnchorInfo_t1304____Position_PropertyInfo,
	&AnchorInfo_t1304____IsSubstring_PropertyInfo,
	&AnchorInfo_t1304____IsPosition_PropertyInfo,
	NULL
};
static Il2CppMethodReference AnchorInfo_t1304_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool AnchorInfo_t1304_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType AnchorInfo_t1304_0_0_0;
extern Il2CppType AnchorInfo_t1304_1_0_0;
struct AnchorInfo_t1304;
const Il2CppTypeDefinitionMetadata AnchorInfo_t1304_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnchorInfo_t1304_VTable/* vtableMethods */
	, AnchorInfo_t1304_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo AnchorInfo_t1304_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnchorInfo"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, AnchorInfo_t1304_MethodInfos/* methods */
	, AnchorInfo_t1304_PropertyInfos/* properties */
	, AnchorInfo_t1304_FieldInfos/* fields */
	, NULL/* events */
	, &AnchorInfo_t1304_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AnchorInfo_t1304_0_0_0/* byval_arg */
	, &AnchorInfo_t1304_1_0_0/* this_arg */
	, &AnchorInfo_t1304_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnchorInfo_t1304)/* instance_size */
	, sizeof (AnchorInfo_t1304)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 10/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// Metadata Definition System.DefaultUriParser
extern TypeInfo DefaultUriParser_t1317_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor()
MethodInfo DefaultUriParser__ctor_m5888_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m5888/* method */
	, &DefaultUriParser_t1317_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo DefaultUriParser_t1317_DefaultUriParser__ctor_m5889_ParameterInfos[] = 
{
	{"scheme", 0, 134218611, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor(System.String)
MethodInfo DefaultUriParser__ctor_m5889_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m5889/* method */
	, &DefaultUriParser_t1317_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, DefaultUriParser_t1317_DefaultUriParser__ctor_m5889_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DefaultUriParser_t1317_MethodInfos[] =
{
	&DefaultUriParser__ctor_m5888_MethodInfo,
	&DefaultUriParser__ctor_m5889_MethodInfo,
	NULL
};
extern MethodInfo UriParser_InitializeAndValidate_m5944_MethodInfo;
extern MethodInfo UriParser_OnRegister_m5945_MethodInfo;
static Il2CppMethodReference DefaultUriParser_t1317_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&UriParser_InitializeAndValidate_m5944_MethodInfo,
	&UriParser_OnRegister_m5945_MethodInfo,
};
static bool DefaultUriParser_t1317_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType DefaultUriParser_t1317_0_0_0;
extern Il2CppType DefaultUriParser_t1317_1_0_0;
extern Il2CppType UriParser_t1318_0_0_0;
struct DefaultUriParser_t1317;
const Il2CppTypeDefinitionMetadata DefaultUriParser_t1317_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1318_0_0_0/* parent */
	, DefaultUriParser_t1317_VTable/* vtableMethods */
	, DefaultUriParser_t1317_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo DefaultUriParser_t1317_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultUriParser"/* name */
	, "System"/* namespaze */
	, DefaultUriParser_t1317_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &DefaultUriParser_t1317_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultUriParser_t1317_0_0_0/* byval_arg */
	, &DefaultUriParser_t1317_1_0_0/* this_arg */
	, &DefaultUriParser_t1317_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultUriParser_t1317)/* instance_size */
	, sizeof (DefaultUriParser_t1317)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// Metadata Definition System.GenericUriParser
extern TypeInfo GenericUriParser_t1319_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
static MethodInfo* GenericUriParser_t1319_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference GenericUriParser_t1319_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&UriParser_InitializeAndValidate_m5944_MethodInfo,
	&UriParser_OnRegister_m5945_MethodInfo,
};
static bool GenericUriParser_t1319_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType GenericUriParser_t1319_0_0_0;
extern Il2CppType GenericUriParser_t1319_1_0_0;
struct GenericUriParser_t1319;
const Il2CppTypeDefinitionMetadata GenericUriParser_t1319_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1318_0_0_0/* parent */
	, GenericUriParser_t1319_VTable/* vtableMethods */
	, GenericUriParser_t1319_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo GenericUriParser_t1319_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericUriParser"/* name */
	, "System"/* namespaze */
	, GenericUriParser_t1319_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &GenericUriParser_t1319_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericUriParser_t1319_0_0_0/* byval_arg */
	, &GenericUriParser_t1319_1_0_0/* this_arg */
	, &GenericUriParser_t1319_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericUriParser_t1319)/* instance_size */
	, sizeof (GenericUriParser_t1319)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Metadata Definition System.Uri/UriScheme
extern TypeInfo UriScheme_t1320_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo UriScheme_t1320_UriScheme__ctor_m5890_ParameterInfos[] = 
{
	{"s", 0, 134218664, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"d", 1, 134218665, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"p", 2, 134218666, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
MethodInfo UriScheme__ctor_m5890_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriScheme__ctor_m5890/* method */
	, &UriScheme_t1320_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t_Int32_t188/* invoker_method */
	, UriScheme_t1320_UriScheme__ctor_m5890_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriScheme_t1320_MethodInfos[] =
{
	&UriScheme__ctor_m5890_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1320____scheme_0_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1320_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1320, ___scheme_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1320____delimiter_1_FieldInfo = 
{
	"delimiter"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1320_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1320, ___delimiter_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_6;
FieldInfo UriScheme_t1320____defaultPort_2_FieldInfo = 
{
	"defaultPort"/* name */
	, &Int32_t188_0_0_6/* type */
	, &UriScheme_t1320_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1320, ___defaultPort_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriScheme_t1320_FieldInfos[] =
{
	&UriScheme_t1320____scheme_0_FieldInfo,
	&UriScheme_t1320____delimiter_1_FieldInfo,
	&UriScheme_t1320____defaultPort_2_FieldInfo,
	NULL
};
static Il2CppMethodReference UriScheme_t1320_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool UriScheme_t1320_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriScheme_t1320_0_0_0;
extern Il2CppType UriScheme_t1320_1_0_0;
extern TypeInfo Uri_t804_il2cpp_TypeInfo;
extern Il2CppType Uri_t804_0_0_0;
const Il2CppTypeDefinitionMetadata UriScheme_t1320_DefinitionMetadata = 
{
	&Uri_t804_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, UriScheme_t1320_VTable/* vtableMethods */
	, UriScheme_t1320_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriScheme_t1320_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriScheme"/* name */
	, ""/* namespaze */
	, UriScheme_t1320_MethodInfos/* methods */
	, NULL/* properties */
	, UriScheme_t1320_FieldInfos/* fields */
	, NULL/* events */
	, &UriScheme_t1320_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriScheme_t1320_0_0_0/* byval_arg */
	, &UriScheme_t1320_1_0_0/* this_arg */
	, &UriScheme_t1320_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)UriScheme_t1320_marshal/* marshal_to_native_func */
	, (methodPointerType)UriScheme_t1320_marshal_back/* marshal_from_native_func */
	, (methodPointerType)UriScheme_t1320_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (UriScheme_t1320)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriScheme_t1320)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UriScheme_t1320_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri
#include "System_System_Uri.h"
// Metadata Definition System.Uri
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri__ctor_m4654_ParameterInfos[] = 
{
	{"uriString", 0, 134218612, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String)
MethodInfo Uri__ctor_m4654_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4654/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Uri_t804_Uri__ctor_m4654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t873_0_0_0;
extern Il2CppType SerializationInfo_t873_0_0_0;
extern Il2CppType StreamingContext_t874_0_0_0;
extern Il2CppType StreamingContext_t874_0_0_0;
static ParameterInfo Uri_t804_Uri__ctor_m5891_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218613, &EmptyCustomAttributesCache, &SerializationInfo_t873_0_0_0},
	{"streamingContext", 1, 134218614, &EmptyCustomAttributesCache, &StreamingContext_t874_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri__ctor_m5891_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m5891/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874/* invoker_method */
	, Uri_t804_Uri__ctor_m5891_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Uri_t804_Uri__ctor_m5892_ParameterInfos[] = 
{
	{"uriString", 0, 134218615, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"dontEscape", 1, 134218616, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri__ctor_m5892;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
MethodInfo Uri__ctor_m5892_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m5892/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_SByte_t232/* invoker_method */
	, Uri_t804_Uri__ctor_m5892_ParameterInfos/* parameters */
	, &Uri_t804__CustomAttributeCache_Uri__ctor_m5892/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t804_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri__ctor_m4656_ParameterInfos[] = 
{
	{"baseUri", 0, 134218617, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
	{"relativeUri", 1, 134218618, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Uri,System.String)
MethodInfo Uri__ctor_m4656_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4656/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri__ctor_m4656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.cctor()
MethodInfo Uri__cctor_m5893_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Uri__cctor_m5893/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t873_0_0_0;
extern Il2CppType StreamingContext_t874_0_0_0;
static ParameterInfo Uri_t804_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_ParameterInfos[] = 
{
	{"info", 0, 134218619, &EmptyCustomAttributesCache, &SerializationInfo_t873_0_0_0},
	{"context", 1, 134218620, &EmptyCustomAttributesCache, &StreamingContext_t874_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874/* invoker_method */
	, Uri_t804_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t804_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_Merge_m5895_ParameterInfos[] = 
{
	{"baseUri", 0, 134218621, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
	{"relativeUri", 1, 134218622, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Merge(System.Uri,System.String)
MethodInfo Uri_Merge_m5895_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Uri_Merge_m5895/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_Merge_m5895_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_AbsoluteUri()
MethodInfo Uri_get_AbsoluteUri_m5896_MethodInfo = 
{
	"get_AbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_AbsoluteUri_m5896/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Authority()
MethodInfo Uri_get_Authority_m5897_MethodInfo = 
{
	"get_Authority"/* name */
	, (methodPointerType)&Uri_get_Authority_m5897/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Host()
MethodInfo Uri_get_Host_m5898_MethodInfo = 
{
	"get_Host"/* name */
	, (methodPointerType)&Uri_get_Host_m5898/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsFile()
MethodInfo Uri_get_IsFile_m5899_MethodInfo = 
{
	"get_IsFile"/* name */
	, (methodPointerType)&Uri_get_IsFile_m5899/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsLoopback()
MethodInfo Uri_get_IsLoopback_m5900_MethodInfo = 
{
	"get_IsLoopback"/* name */
	, (methodPointerType)&Uri_get_IsLoopback_m5900/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsUnc()
MethodInfo Uri_get_IsUnc_m5901_MethodInfo = 
{
	"get_IsUnc"/* name */
	, (methodPointerType)&Uri_get_IsUnc_m5901/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Scheme()
MethodInfo Uri_get_Scheme_m5902_MethodInfo = 
{
	"get_Scheme"/* name */
	, (methodPointerType)&Uri_get_Scheme_m5902/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsAbsoluteUri()
MethodInfo Uri_get_IsAbsoluteUri_m5903_MethodInfo = 
{
	"get_IsAbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_IsAbsoluteUri_m5903/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_CheckHostName_m5904_ParameterInfos[] = 
{
	{"name", 0, 134218623, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriHostNameType_t1323_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1323_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
MethodInfo Uri_CheckHostName_m5904_MethodInfo = 
{
	"CheckHostName"/* name */
	, (methodPointerType)&Uri_CheckHostName_m5904/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1323_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1323_Object_t/* invoker_method */
	, Uri_t804_Uri_CheckHostName_m5904_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_IsIPv4Address_m5905_ParameterInfos[] = 
{
	{"name", 0, 134218624, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsIPv4Address(System.String)
MethodInfo Uri_IsIPv4Address_m5905_MethodInfo = 
{
	"IsIPv4Address"/* name */
	, (methodPointerType)&Uri_IsIPv4Address_m5905/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_IsIPv4Address_m5905_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_IsDomainAddress_m5906_ParameterInfos[] = 
{
	{"name", 0, 134218625, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsDomainAddress(System.String)
MethodInfo Uri_IsDomainAddress_m5906_MethodInfo = 
{
	"IsDomainAddress"/* name */
	, (methodPointerType)&Uri_IsDomainAddress_m5906/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_IsDomainAddress_m5906_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_CheckSchemeName_m5907_ParameterInfos[] = 
{
	{"schemeName", 0, 134218626, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CheckSchemeName(System.String)
MethodInfo Uri_CheckSchemeName_m5907_MethodInfo = 
{
	"CheckSchemeName"/* name */
	, (methodPointerType)&Uri_CheckSchemeName_m5907/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_CheckSchemeName_m5907_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Uri_t804_Uri_IsAlpha_m5908_ParameterInfos[] = 
{
	{"c", 0, 134218627, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsAlpha(System.Char)
MethodInfo Uri_IsAlpha_m5908_MethodInfo = 
{
	"IsAlpha"/* name */
	, (methodPointerType)&Uri_IsAlpha_m5908/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int16_t596/* invoker_method */
	, Uri_t804_Uri_IsAlpha_m5908_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Uri_t804_Uri_Equals_m5909_ParameterInfos[] = 
{
	{"comparant", 0, 134218628, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::Equals(System.Object)
MethodInfo Uri_Equals_m5909_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Uri_Equals_m5909/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_Equals_m5909_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t804_0_0_0;
static ParameterInfo Uri_t804_Uri_InternalEquals_m5910_ParameterInfos[] = 
{
	{"uri", 0, 134218629, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::InternalEquals(System.Uri)
MethodInfo Uri_InternalEquals_m5910_MethodInfo = 
{
	"InternalEquals"/* name */
	, (methodPointerType)&Uri_InternalEquals_m5910/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_InternalEquals_m5910_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetHashCode()
MethodInfo Uri_GetHashCode_m5911_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Uri_GetHashCode_m5911/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriPartial_t1325_0_0_0;
extern Il2CppType UriPartial_t1325_0_0_0;
static ParameterInfo Uri_t804_Uri_GetLeftPart_m5912_ParameterInfos[] = 
{
	{"part", 0, 134218630, &EmptyCustomAttributesCache, &UriPartial_t1325_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetLeftPart(System.UriPartial)
MethodInfo Uri_GetLeftPart_m5912_MethodInfo = 
{
	"GetLeftPart"/* name */
	, (methodPointerType)&Uri_GetLeftPart_m5912/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188/* invoker_method */
	, Uri_t804_Uri_GetLeftPart_m5912_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Uri_t804_Uri_FromHex_m5913_ParameterInfos[] = 
{
	{"digit", 0, 134218631, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::FromHex(System.Char)
MethodInfo Uri_FromHex_m5913_MethodInfo = 
{
	"FromHex"/* name */
	, (methodPointerType)&Uri_FromHex_m5913/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Int16_t596/* invoker_method */
	, Uri_t804_Uri_FromHex_m5913_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Uri_t804_Uri_HexEscape_m5914_ParameterInfos[] = 
{
	{"character", 0, 134218632, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::HexEscape(System.Char)
MethodInfo Uri_HexEscape_m5914_MethodInfo = 
{
	"HexEscape"/* name */
	, (methodPointerType)&Uri_HexEscape_m5914/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int16_t596/* invoker_method */
	, Uri_t804_Uri_HexEscape_m5914_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t427_0_0_0;
static ParameterInfo Uri_t804_Uri_IsHexDigit_m5915_ParameterInfos[] = 
{
	{"digit", 0, 134218633, &EmptyCustomAttributesCache, &Char_t427_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Int16_t596 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexDigit(System.Char)
MethodInfo Uri_IsHexDigit_m5915_MethodInfo = 
{
	"IsHexDigit"/* name */
	, (methodPointerType)&Uri_IsHexDigit_m5915/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Int16_t596/* invoker_method */
	, Uri_t804_Uri_IsHexDigit_m5915_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo Uri_t804_Uri_IsHexEncoding_m5916_ParameterInfos[] = 
{
	{"pattern", 0, 134218634, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218635, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
MethodInfo Uri_IsHexEncoding_m5916_MethodInfo = 
{
	"IsHexEncoding"/* name */
	, (methodPointerType)&Uri_IsHexEncoding_m5916/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t_Int32_t188/* invoker_method */
	, Uri_t804_Uri_IsHexEncoding_m5916_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_1_0_0;
extern Il2CppType String_t_1_0_0;
static ParameterInfo Uri_t804_Uri_AppendQueryAndFragment_m5917_ParameterInfos[] = 
{
	{"result", 0, 134218636, &EmptyCustomAttributesCache, &String_t_1_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_StringU26_t1059 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
MethodInfo Uri_AppendQueryAndFragment_m5917_MethodInfo = 
{
	"AppendQueryAndFragment"/* name */
	, (methodPointerType)&Uri_AppendQueryAndFragment_m5917/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_StringU26_t1059/* invoker_method */
	, Uri_t804_Uri_AppendQueryAndFragment_m5917_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ToString()
MethodInfo Uri_ToString_m4659_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Uri_ToString_m4659/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_EscapeString_m5918_ParameterInfos[] = 
{
	{"str", 0, 134218637, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_EscapeString_m5918;
// System.String System.Uri::EscapeString(System.String)
MethodInfo Uri_EscapeString_m5918_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m5918/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_EscapeString_m5918_ParameterInfos/* parameters */
	, &Uri_t804__CustomAttributeCache_Uri_EscapeString_m5918/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Uri_t804_Uri_EscapeString_m5919_ParameterInfos[] = 
{
	{"str", 0, 134218638, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"escapeReserved", 1, 134218639, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"escapeHex", 2, 134218640, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
	{"escapeBrackets", 3, 134218641, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t232_SByte_t232_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
MethodInfo Uri_EscapeString_m5919_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m5919/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t232_SByte_t232_SByte_t232/* invoker_method */
	, Uri_t804_Uri_EscapeString_m5919_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1324_0_0_0;
extern Il2CppType UriKind_t1324_0_0_0;
static ParameterInfo Uri_t804_Uri_ParseUri_m5920_ParameterInfos[] = 
{
	{"kind", 0, 134218642, &EmptyCustomAttributesCache, &UriKind_t1324_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseUri(System.UriKind)
MethodInfo Uri_ParseUri_m5920_MethodInfo = 
{
	"ParseUri"/* name */
	, (methodPointerType)&Uri_ParseUri_m5920/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, Uri_t804_Uri_ParseUri_m5920_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_Unescape_m5921_ParameterInfos[] = 
{
	{"str", 0, 134218643, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_Unescape_m5921;
// System.String System.Uri::Unescape(System.String)
MethodInfo Uri_Unescape_m5921_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m5921/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_Unescape_m5921_ParameterInfos/* parameters */
	, &Uri_t804__CustomAttributeCache_Uri_Unescape_m5921/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Uri_t804_Uri_Unescape_m5922_ParameterInfos[] = 
{
	{"str", 0, 134218644, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"excludeSpecial", 1, 134218645, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String,System.Boolean)
MethodInfo Uri_Unescape_m5922_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m5922/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t232/* invoker_method */
	, Uri_t804_Uri_Unescape_m5922_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_ParseAsWindowsUNC_m5923_ParameterInfos[] = 
{
	{"uriString", 0, 134218646, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
MethodInfo Uri_ParseAsWindowsUNC_m5923_MethodInfo = 
{
	"ParseAsWindowsUNC"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsUNC_m5923/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Uri_t804_Uri_ParseAsWindowsUNC_m5923_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_ParseAsWindowsAbsoluteFilePath_m5924_ParameterInfos[] = 
{
	{"uriString", 0, 134218647, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m5924_MethodInfo = 
{
	"ParseAsWindowsAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsAbsoluteFilePath_m5924/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_ParseAsWindowsAbsoluteFilePath_m5924_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_ParseAsUnixAbsoluteFilePath_m5925_ParameterInfos[] = 
{
	{"uriString", 0, 134218648, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m5925_MethodInfo = 
{
	"ParseAsUnixAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsUnixAbsoluteFilePath_m5925/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, Uri_t804_Uri_ParseAsUnixAbsoluteFilePath_m5925_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1324_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_Parse_m5926_ParameterInfos[] = 
{
	{"kind", 0, 134218649, &EmptyCustomAttributesCache, &UriKind_t1324_0_0_0},
	{"uriString", 1, 134218650, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Parse(System.UriKind,System.String)
MethodInfo Uri_Parse_m5926_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Uri_Parse_m5926/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188_Object_t/* invoker_method */
	, Uri_t804_Uri_Parse_m5926_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1324_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_ParseNoExceptions_m5927_ParameterInfos[] = 
{
	{"kind", 0, 134218651, &EmptyCustomAttributesCache, &UriKind_t1324_0_0_0},
	{"uriString", 1, 134218652, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
MethodInfo Uri_ParseNoExceptions_m5927_MethodInfo = 
{
	"ParseNoExceptions"/* name */
	, (methodPointerType)&Uri_ParseNoExceptions_m5927/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t188_Object_t/* invoker_method */
	, Uri_t804_Uri_ParseNoExceptions_m5927_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_CompactEscaped_m5928_ParameterInfos[] = 
{
	{"scheme", 0, 134218653, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CompactEscaped(System.String)
MethodInfo Uri_CompactEscaped_m5928_MethodInfo = 
{
	"CompactEscaped"/* name */
	, (methodPointerType)&Uri_CompactEscaped_m5928/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_CompactEscaped_m5928_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t202_0_0_0;
static ParameterInfo Uri_t804_Uri_Reduce_m5929_ParameterInfos[] = 
{
	{"path", 0, 134218654, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"compact_escaped", 1, 134218655, &EmptyCustomAttributesCache, &Boolean_t202_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t232 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Reduce(System.String,System.Boolean)
MethodInfo Uri_Reduce_m5929_MethodInfo = 
{
	"Reduce"/* name */
	, (methodPointerType)&Uri_Reduce_m5929/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t232/* invoker_method */
	, Uri_t804_Uri_Reduce_m5929_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_1_0_0;
extern Il2CppType Char_t427_1_0_2;
extern Il2CppType Char_t427_1_0_0;
static ParameterInfo Uri_t804_Uri_HexUnescapeMultiByte_m5930_ParameterInfos[] = 
{
	{"pattern", 0, 134218656, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218657, &EmptyCustomAttributesCache, &Int32_t188_1_0_0},
	{"surrogate", 2, 134218658, &EmptyCustomAttributesCache, &Char_t427_1_0_2},
};
extern Il2CppType Char_t427_0_0_0;
extern void* RuntimeInvoker_Char_t427_Object_t_Int32U26_t597_CharU26_t1376 (MethodInfo* method, void* obj, void** args);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
MethodInfo Uri_HexUnescapeMultiByte_m5930_MethodInfo = 
{
	"HexUnescapeMultiByte"/* name */
	, (methodPointerType)&Uri_HexUnescapeMultiByte_m5930/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Char_t427_0_0_0/* return_type */
	, RuntimeInvoker_Char_t427_Object_t_Int32U26_t597_CharU26_t1376/* invoker_method */
	, Uri_t804_Uri_HexUnescapeMultiByte_m5930_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_GetSchemeDelimiter_m5931_ParameterInfos[] = 
{
	{"scheme", 0, 134218659, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetSchemeDelimiter(System.String)
MethodInfo Uri_GetSchemeDelimiter_m5931_MethodInfo = 
{
	"GetSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetSchemeDelimiter_m5931/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_GetSchemeDelimiter_m5931_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_GetDefaultPort_m5932_ParameterInfos[] = 
{
	{"scheme", 0, 134218660, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetDefaultPort(System.String)
MethodInfo Uri_GetDefaultPort_m5932_MethodInfo = 
{
	"GetDefaultPort"/* name */
	, (methodPointerType)&Uri_GetDefaultPort_m5932/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188_Object_t/* invoker_method */
	, Uri_t804_Uri_GetDefaultPort_m5932_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m5933_MethodInfo = 
{
	"GetOpaqueWiseSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetOpaqueWiseSchemeDelimiter_m5933/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t804_Uri_IsPredefinedScheme_m5934_ParameterInfos[] = 
{
	{"scheme", 0, 134218661, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
MethodInfo Uri_IsPredefinedScheme_m5934_MethodInfo = 
{
	"IsPredefinedScheme"/* name */
	, (methodPointerType)&Uri_IsPredefinedScheme_m5934/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, Uri_t804_Uri_IsPredefinedScheme_m5934_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriParser_t1318_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.Uri::get_Parser()
MethodInfo Uri_get_Parser_m5935_MethodInfo = 
{
	"get_Parser"/* name */
	, (methodPointerType)&Uri_get_Parser_m5935/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1318_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::EnsureAbsoluteUri()
MethodInfo Uri_EnsureAbsoluteUri_m5936_MethodInfo = 
{
	"EnsureAbsoluteUri"/* name */
	, (methodPointerType)&Uri_EnsureAbsoluteUri_m5936/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t804_0_0_0;
extern Il2CppType Uri_t804_0_0_0;
static ParameterInfo Uri_t804_Uri_op_Equality_m5937_ParameterInfos[] = 
{
	{"u1", 0, 134218662, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
	{"u2", 1, 134218663, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
MethodInfo Uri_op_Equality_m5937_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Uri_op_Equality_m5937/* method */
	, &Uri_t804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t_Object_t/* invoker_method */
	, Uri_t804_Uri_op_Equality_m5937_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Uri_t804_MethodInfos[] =
{
	&Uri__ctor_m4654_MethodInfo,
	&Uri__ctor_m5891_MethodInfo,
	&Uri__ctor_m5892_MethodInfo,
	&Uri__ctor_m4656_MethodInfo,
	&Uri__cctor_m5893_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_MethodInfo,
	&Uri_Merge_m5895_MethodInfo,
	&Uri_get_AbsoluteUri_m5896_MethodInfo,
	&Uri_get_Authority_m5897_MethodInfo,
	&Uri_get_Host_m5898_MethodInfo,
	&Uri_get_IsFile_m5899_MethodInfo,
	&Uri_get_IsLoopback_m5900_MethodInfo,
	&Uri_get_IsUnc_m5901_MethodInfo,
	&Uri_get_Scheme_m5902_MethodInfo,
	&Uri_get_IsAbsoluteUri_m5903_MethodInfo,
	&Uri_CheckHostName_m5904_MethodInfo,
	&Uri_IsIPv4Address_m5905_MethodInfo,
	&Uri_IsDomainAddress_m5906_MethodInfo,
	&Uri_CheckSchemeName_m5907_MethodInfo,
	&Uri_IsAlpha_m5908_MethodInfo,
	&Uri_Equals_m5909_MethodInfo,
	&Uri_InternalEquals_m5910_MethodInfo,
	&Uri_GetHashCode_m5911_MethodInfo,
	&Uri_GetLeftPart_m5912_MethodInfo,
	&Uri_FromHex_m5913_MethodInfo,
	&Uri_HexEscape_m5914_MethodInfo,
	&Uri_IsHexDigit_m5915_MethodInfo,
	&Uri_IsHexEncoding_m5916_MethodInfo,
	&Uri_AppendQueryAndFragment_m5917_MethodInfo,
	&Uri_ToString_m4659_MethodInfo,
	&Uri_EscapeString_m5918_MethodInfo,
	&Uri_EscapeString_m5919_MethodInfo,
	&Uri_ParseUri_m5920_MethodInfo,
	&Uri_Unescape_m5921_MethodInfo,
	&Uri_Unescape_m5922_MethodInfo,
	&Uri_ParseAsWindowsUNC_m5923_MethodInfo,
	&Uri_ParseAsWindowsAbsoluteFilePath_m5924_MethodInfo,
	&Uri_ParseAsUnixAbsoluteFilePath_m5925_MethodInfo,
	&Uri_Parse_m5926_MethodInfo,
	&Uri_ParseNoExceptions_m5927_MethodInfo,
	&Uri_CompactEscaped_m5928_MethodInfo,
	&Uri_Reduce_m5929_MethodInfo,
	&Uri_HexUnescapeMultiByte_m5930_MethodInfo,
	&Uri_GetSchemeDelimiter_m5931_MethodInfo,
	&Uri_GetDefaultPort_m5932_MethodInfo,
	&Uri_GetOpaqueWiseSchemeDelimiter_m5933_MethodInfo,
	&Uri_IsPredefinedScheme_m5934_MethodInfo,
	&Uri_get_Parser_m5935_MethodInfo,
	&Uri_EnsureAbsoluteUri_m5936_MethodInfo,
	&Uri_op_Equality_m5937_MethodInfo,
	NULL
};
extern Il2CppType Int32_t188_0_0_32849;
FieldInfo Uri_t804____MaxUriLength_0_FieldInfo = 
{
	"MaxUriLength"/* name */
	, &Int32_t188_0_0_32849/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Uri_t804____isUnixFilePath_1_FieldInfo = 
{
	"isUnixFilePath"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___isUnixFilePath_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____source_2_FieldInfo = 
{
	"source"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___source_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____scheme_3_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___scheme_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____host_4_FieldInfo = 
{
	"host"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___host_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Uri_t804____port_5_FieldInfo = 
{
	"port"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___port_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____path_6_FieldInfo = 
{
	"path"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___path_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____query_7_FieldInfo = 
{
	"query"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___query_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____fragment_8_FieldInfo = 
{
	"fragment"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___fragment_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____userinfo_9_FieldInfo = 
{
	"userinfo"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___userinfo_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Uri_t804____isUnc_10_FieldInfo = 
{
	"isUnc"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___isUnc_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Uri_t804____isOpaquePart_11_FieldInfo = 
{
	"isOpaquePart"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___isOpaquePart_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Uri_t804____isAbsoluteUri_12_FieldInfo = 
{
	"isAbsoluteUri"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___isAbsoluteUri_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t215_0_0_1;
FieldInfo Uri_t804____segments_13_FieldInfo = 
{
	"segments"/* name */
	, &StringU5BU5D_t215_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___segments_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t202_0_0_1;
FieldInfo Uri_t804____userEscaped_14_FieldInfo = 
{
	"userEscaped"/* name */
	, &Boolean_t202_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___userEscaped_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____cachedAbsoluteUri_15_FieldInfo = 
{
	"cachedAbsoluteUri"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___cachedAbsoluteUri_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____cachedToString_16_FieldInfo = 
{
	"cachedToString"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___cachedToString_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t804____cachedLocalPath_17_FieldInfo = 
{
	"cachedLocalPath"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___cachedLocalPath_17)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo Uri_t804____cachedHashCode_18_FieldInfo = 
{
	"cachedHashCode"/* name */
	, &Int32_t188_0_0_1/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___cachedHashCode_18)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_49;
FieldInfo Uri_t804____hexUpperChars_19_FieldInfo = 
{
	"hexUpperChars"/* name */
	, &String_t_0_0_49/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___hexUpperChars_19)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____SchemeDelimiter_20_FieldInfo = 
{
	"SchemeDelimiter"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___SchemeDelimiter_20)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeFile_21_FieldInfo = 
{
	"UriSchemeFile"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeFile_21)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeFtp_22_FieldInfo = 
{
	"UriSchemeFtp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeFtp_22)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeGopher_23_FieldInfo = 
{
	"UriSchemeGopher"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeGopher_23)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeHttp_24_FieldInfo = 
{
	"UriSchemeHttp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeHttp_24)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeHttps_25_FieldInfo = 
{
	"UriSchemeHttps"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeHttps_25)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeMailto_26_FieldInfo = 
{
	"UriSchemeMailto"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeMailto_26)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeNews_27_FieldInfo = 
{
	"UriSchemeNews"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeNews_27)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeNntp_28_FieldInfo = 
{
	"UriSchemeNntp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeNntp_28)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeNetPipe_29_FieldInfo = 
{
	"UriSchemeNetPipe"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeNetPipe_29)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t804____UriSchemeNetTcp_30_FieldInfo = 
{
	"UriSchemeNetTcp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___UriSchemeNetTcp_30)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriSchemeU5BU5D_t1321_0_0_17;
FieldInfo Uri_t804____schemes_31_FieldInfo = 
{
	"schemes"/* name */
	, &UriSchemeU5BU5D_t1321_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___schemes_31)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriParser_t1318_0_0_129;
FieldInfo Uri_t804____parser_32_FieldInfo = 
{
	"parser"/* name */
	, &UriParser_t1318_0_0_129/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804, ___parser_32)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t272_0_0_17;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map12;
FieldInfo Uri_t804____U3CU3Ef__switch$map12_33_FieldInfo = 
{
	"<>f__switch$map12"/* name */
	, &Dictionary_2_t272_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___U3CU3Ef__switch$map12_33)/* offset */
	, &Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map12/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t272_0_0_17;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map13;
FieldInfo Uri_t804____U3CU3Ef__switch$map13_34_FieldInfo = 
{
	"<>f__switch$map13"/* name */
	, &Dictionary_2_t272_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___U3CU3Ef__switch$map13_34)/* offset */
	, &Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map13/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t272_0_0_17;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map14;
FieldInfo Uri_t804____U3CU3Ef__switch$map14_35_FieldInfo = 
{
	"<>f__switch$map14"/* name */
	, &Dictionary_2_t272_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___U3CU3Ef__switch$map14_35)/* offset */
	, &Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map14/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t272_0_0_17;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map15;
FieldInfo Uri_t804____U3CU3Ef__switch$map15_36_FieldInfo = 
{
	"<>f__switch$map15"/* name */
	, &Dictionary_2_t272_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___U3CU3Ef__switch$map15_36)/* offset */
	, &Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map15/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t272_0_0_17;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map16;
FieldInfo Uri_t804____U3CU3Ef__switch$map16_37_FieldInfo = 
{
	"<>f__switch$map16"/* name */
	, &Dictionary_2_t272_0_0_17/* type */
	, &Uri_t804_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t804_StaticFields, ___U3CU3Ef__switch$map16_37)/* offset */
	, &Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map16/* custom_attributes_cache */

};
static FieldInfo* Uri_t804_FieldInfos[] =
{
	&Uri_t804____MaxUriLength_0_FieldInfo,
	&Uri_t804____isUnixFilePath_1_FieldInfo,
	&Uri_t804____source_2_FieldInfo,
	&Uri_t804____scheme_3_FieldInfo,
	&Uri_t804____host_4_FieldInfo,
	&Uri_t804____port_5_FieldInfo,
	&Uri_t804____path_6_FieldInfo,
	&Uri_t804____query_7_FieldInfo,
	&Uri_t804____fragment_8_FieldInfo,
	&Uri_t804____userinfo_9_FieldInfo,
	&Uri_t804____isUnc_10_FieldInfo,
	&Uri_t804____isOpaquePart_11_FieldInfo,
	&Uri_t804____isAbsoluteUri_12_FieldInfo,
	&Uri_t804____segments_13_FieldInfo,
	&Uri_t804____userEscaped_14_FieldInfo,
	&Uri_t804____cachedAbsoluteUri_15_FieldInfo,
	&Uri_t804____cachedToString_16_FieldInfo,
	&Uri_t804____cachedLocalPath_17_FieldInfo,
	&Uri_t804____cachedHashCode_18_FieldInfo,
	&Uri_t804____hexUpperChars_19_FieldInfo,
	&Uri_t804____SchemeDelimiter_20_FieldInfo,
	&Uri_t804____UriSchemeFile_21_FieldInfo,
	&Uri_t804____UriSchemeFtp_22_FieldInfo,
	&Uri_t804____UriSchemeGopher_23_FieldInfo,
	&Uri_t804____UriSchemeHttp_24_FieldInfo,
	&Uri_t804____UriSchemeHttps_25_FieldInfo,
	&Uri_t804____UriSchemeMailto_26_FieldInfo,
	&Uri_t804____UriSchemeNews_27_FieldInfo,
	&Uri_t804____UriSchemeNntp_28_FieldInfo,
	&Uri_t804____UriSchemeNetPipe_29_FieldInfo,
	&Uri_t804____UriSchemeNetTcp_30_FieldInfo,
	&Uri_t804____schemes_31_FieldInfo,
	&Uri_t804____parser_32_FieldInfo,
	&Uri_t804____U3CU3Ef__switch$map12_33_FieldInfo,
	&Uri_t804____U3CU3Ef__switch$map13_34_FieldInfo,
	&Uri_t804____U3CU3Ef__switch$map14_35_FieldInfo,
	&Uri_t804____U3CU3Ef__switch$map15_36_FieldInfo,
	&Uri_t804____U3CU3Ef__switch$map16_37_FieldInfo,
	NULL
};
static const int32_t Uri_t804____MaxUriLength_0_DefaultValueData = 32766;
static Il2CppFieldDefaultValueEntry Uri_t804____MaxUriLength_0_DefaultValue = 
{
	&Uri_t804____MaxUriLength_0_FieldInfo/* field */
	, { (char*)&Uri_t804____MaxUriLength_0_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Uri_t804_FieldDefaultValues[] = 
{
	&Uri_t804____MaxUriLength_0_DefaultValue,
	NULL
};
extern MethodInfo Uri_get_AbsoluteUri_m5896_MethodInfo;
static PropertyInfo Uri_t804____AbsoluteUri_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "AbsoluteUri"/* name */
	, &Uri_get_AbsoluteUri_m5896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Authority_m5897_MethodInfo;
static PropertyInfo Uri_t804____Authority_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "Authority"/* name */
	, &Uri_get_Authority_m5897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Host_m5898_MethodInfo;
static PropertyInfo Uri_t804____Host_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "Host"/* name */
	, &Uri_get_Host_m5898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsFile_m5899_MethodInfo;
static PropertyInfo Uri_t804____IsFile_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "IsFile"/* name */
	, &Uri_get_IsFile_m5899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsLoopback_m5900_MethodInfo;
static PropertyInfo Uri_t804____IsLoopback_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "IsLoopback"/* name */
	, &Uri_get_IsLoopback_m5900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsUnc_m5901_MethodInfo;
static PropertyInfo Uri_t804____IsUnc_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "IsUnc"/* name */
	, &Uri_get_IsUnc_m5901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Scheme_m5902_MethodInfo;
static PropertyInfo Uri_t804____Scheme_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "Scheme"/* name */
	, &Uri_get_Scheme_m5902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsAbsoluteUri_m5903_MethodInfo;
static PropertyInfo Uri_t804____IsAbsoluteUri_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "IsAbsoluteUri"/* name */
	, &Uri_get_IsAbsoluteUri_m5903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Parser_m5935_MethodInfo;
static PropertyInfo Uri_t804____Parser_PropertyInfo = 
{
	&Uri_t804_il2cpp_TypeInfo/* parent */
	, "Parser"/* name */
	, &Uri_get_Parser_m5935_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Uri_t804_PropertyInfos[] =
{
	&Uri_t804____AbsoluteUri_PropertyInfo,
	&Uri_t804____Authority_PropertyInfo,
	&Uri_t804____Host_PropertyInfo,
	&Uri_t804____IsFile_PropertyInfo,
	&Uri_t804____IsLoopback_PropertyInfo,
	&Uri_t804____IsUnc_PropertyInfo,
	&Uri_t804____Scheme_PropertyInfo,
	&Uri_t804____IsAbsoluteUri_PropertyInfo,
	&Uri_t804____Parser_PropertyInfo,
	NULL
};
static const Il2CppType* Uri_t804_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UriScheme_t1320_0_0_0,
};
extern MethodInfo Uri_Equals_m5909_MethodInfo;
extern MethodInfo Uri_GetHashCode_m5911_MethodInfo;
extern MethodInfo Uri_ToString_m4659_MethodInfo;
extern MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_MethodInfo;
extern MethodInfo Uri_Unescape_m5921_MethodInfo;
static Il2CppMethodReference Uri_t804_VTable[] =
{
	&Uri_Equals_m5909_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Uri_GetHashCode_m5911_MethodInfo,
	&Uri_ToString_m4659_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5894_MethodInfo,
	&Uri_Unescape_m5921_MethodInfo,
};
static bool Uri_t804_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Uri_t804_InterfacesTypeInfos[] = 
{
	&ISerializable_t573_0_0_0,
};
static Il2CppInterfaceOffsetPair Uri_t804_InterfacesOffsets[] = 
{
	{ &ISerializable_t573_0_0_0, 4},
};
extern TypeInfo TypeConverterAttribute_t1167_il2cpp_TypeInfo;
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"
extern MethodInfo TypeConverterAttribute__ctor_m5150_MethodInfo;
extern TypeInfo UriTypeConverter_t1326_il2cpp_TypeInfo;
extern Il2CppType UriTypeConverter_t1326_0_0_0;
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
void Uri_t804_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeConverterAttribute_t1167 * tmp;
		tmp = (TypeConverterAttribute_t1167 *)il2cpp_codegen_object_new (&TypeConverterAttribute_t1167_il2cpp_TypeInfo);
		TypeConverterAttribute__ctor_m5150(tmp, il2cpp_codegen_type_get_object(&UriTypeConverter_t1326_0_0_0), &TypeConverterAttribute__ctor_m5150_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo CompilerGeneratedAttribute_t233_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m1099_MethodInfo;
void Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map12(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map13(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo ObsoleteAttribute_t568_il2cpp_TypeInfo;
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern MethodInfo ObsoleteAttribute__ctor_m6303_MethodInfo;
void Uri_t804_CustomAttributesCacheGenerator_Uri__ctor_m5892(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t568 * tmp;
		tmp = (ObsoleteAttribute_t568 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t568_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m6303(tmp, &ObsoleteAttribute__ctor_m6303_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_Uri_EscapeString_m5918(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t568 * tmp;
		tmp = (ObsoleteAttribute_t568 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t568_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m6303(tmp, &ObsoleteAttribute__ctor_m6303_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t804_CustomAttributesCacheGenerator_Uri_Unescape_m5921(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t568 * tmp;
		tmp = (ObsoleteAttribute_t568 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t568_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m6303(tmp, &ObsoleteAttribute__ctor_m6303_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Uri_t804__CustomAttributeCache = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator
};
CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map12 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map12
};
CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map13 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map13
};
CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map14 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14
};
CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map15 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15
};
CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map16 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16
};
CustomAttributesCache Uri_t804__CustomAttributeCache_Uri__ctor_m5892 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_Uri__ctor_m5892
};
CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_EscapeString_m5918 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_Uri_EscapeString_m5918
};
CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_Unescape_m5921 = {
1,
NULL,
&Uri_t804_CustomAttributesCacheGenerator_Uri_Unescape_m5921
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Uri_t804_1_0_0;
struct Uri_t804;
extern CustomAttributesCache Uri_t804__CustomAttributeCache;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map12;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map13;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map14;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map15;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_U3CU3Ef__switch$map16;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri__ctor_m5892;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_EscapeString_m5918;
extern CustomAttributesCache Uri_t804__CustomAttributeCache_Uri_Unescape_m5921;
const Il2CppTypeDefinitionMetadata Uri_t804_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Uri_t804_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Uri_t804_InterfacesTypeInfos/* implementedInterfaces */
	, Uri_t804_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Uri_t804_VTable/* vtableMethods */
	, Uri_t804_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Uri_t804_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Uri"/* name */
	, "System"/* namespaze */
	, Uri_t804_MethodInfos/* methods */
	, Uri_t804_PropertyInfos/* properties */
	, Uri_t804_FieldInfos/* fields */
	, NULL/* events */
	, &Uri_t804_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &Uri_t804__CustomAttributeCache/* custom_attributes_cache */
	, &Uri_t804_0_0_0/* byval_arg */
	, &Uri_t804_1_0_0/* this_arg */
	, &Uri_t804_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Uri_t804_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Uri_t804)/* instance_size */
	, sizeof (Uri_t804)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Uri_t804_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 50/* method_count */
	, 9/* property_count */
	, 38/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.UriFormatException
#include "System_System_UriFormatException.h"
// Metadata Definition System.UriFormatException
extern TypeInfo UriFormatException_t1322_il2cpp_TypeInfo;
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor()
MethodInfo UriFormatException__ctor_m5938_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m5938/* method */
	, &UriFormatException_t1322_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriFormatException_t1322_UriFormatException__ctor_m5939_ParameterInfos[] = 
{
	{"message", 0, 134218667, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.String)
MethodInfo UriFormatException__ctor_m5939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m5939/* method */
	, &UriFormatException_t1322_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, UriFormatException_t1322_UriFormatException__ctor_m5939_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t873_0_0_0;
extern Il2CppType StreamingContext_t874_0_0_0;
static ParameterInfo UriFormatException_t1322_UriFormatException__ctor_m5940_ParameterInfos[] = 
{
	{"info", 0, 134218668, &EmptyCustomAttributesCache, &SerializationInfo_t873_0_0_0},
	{"context", 1, 134218669, &EmptyCustomAttributesCache, &StreamingContext_t874_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException__ctor_m5940_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m5940/* method */
	, &UriFormatException_t1322_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874/* invoker_method */
	, UriFormatException_t1322_UriFormatException__ctor_m5940_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t873_0_0_0;
extern Il2CppType StreamingContext_t874_0_0_0;
static ParameterInfo UriFormatException_t1322_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_ParameterInfos[] = 
{
	{"info", 0, 134218670, &EmptyCustomAttributesCache, &SerializationInfo_t873_0_0_0},
	{"context", 1, 134218671, &EmptyCustomAttributesCache, &StreamingContext_t874_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941/* method */
	, &UriFormatException_t1322_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_StreamingContext_t874/* invoker_method */
	, UriFormatException_t1322_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriFormatException_t1322_MethodInfos[] =
{
	&UriFormatException__ctor_m5938_MethodInfo,
	&UriFormatException__ctor_m5939_MethodInfo,
	&UriFormatException__ctor_m5940_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_MethodInfo,
	NULL
};
extern MethodInfo Exception_ToString_m4829_MethodInfo;
extern MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_MethodInfo;
extern MethodInfo Exception_get_InnerException_m4561_MethodInfo;
extern MethodInfo Exception_get_Message_m2821_MethodInfo;
extern MethodInfo Exception_get_Source_m4831_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m4773_MethodInfo;
extern MethodInfo Exception_GetObjectData_m4830_MethodInfo;
extern MethodInfo Exception_GetType_m4774_MethodInfo;
static Il2CppMethodReference UriFormatException_t1322_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Exception_ToString_m4829_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m5941_MethodInfo,
	&Exception_get_InnerException_m4561_MethodInfo,
	&Exception_get_Message_m2821_MethodInfo,
	&Exception_get_Source_m4831_MethodInfo,
	&Exception_get_StackTrace_m4773_MethodInfo,
	&Exception_GetObjectData_m4830_MethodInfo,
	&Exception_GetType_m4774_MethodInfo,
};
static bool UriFormatException_t1322_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UriFormatException_t1322_InterfacesTypeInfos[] = 
{
	&ISerializable_t573_0_0_0,
};
extern Il2CppType _Exception_t972_0_0_0;
static Il2CppInterfaceOffsetPair UriFormatException_t1322_InterfacesOffsets[] = 
{
	{ &ISerializable_t573_0_0_0, 4},
	{ &_Exception_t972_0_0_0, 5},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriFormatException_t1322_0_0_0;
extern Il2CppType UriFormatException_t1322_1_0_0;
extern Il2CppType FormatException_t916_0_0_0;
struct UriFormatException_t1322;
const Il2CppTypeDefinitionMetadata UriFormatException_t1322_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UriFormatException_t1322_InterfacesTypeInfos/* implementedInterfaces */
	, UriFormatException_t1322_InterfacesOffsets/* interfaceOffsets */
	, &FormatException_t916_0_0_0/* parent */
	, UriFormatException_t1322_VTable/* vtableMethods */
	, UriFormatException_t1322_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriFormatException_t1322_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriFormatException"/* name */
	, "System"/* namespaze */
	, UriFormatException_t1322_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriFormatException_t1322_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriFormatException_t1322_0_0_0/* byval_arg */
	, &UriFormatException_t1322_1_0_0/* this_arg */
	, &UriFormatException_t1322_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriFormatException_t1322)/* instance_size */
	, sizeof (UriFormatException_t1322)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// Metadata Definition System.UriHostNameType
extern TypeInfo UriHostNameType_t1323_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
static MethodInfo* UriHostNameType_t1323_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t188_0_0_1542;
FieldInfo UriHostNameType_t1323____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t188_0_0_1542/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, offsetof(UriHostNameType_t1323, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1323_0_0_32854;
FieldInfo UriHostNameType_t1323____Unknown_2_FieldInfo = 
{
	"Unknown"/* name */
	, &UriHostNameType_t1323_0_0_32854/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1323_0_0_32854;
FieldInfo UriHostNameType_t1323____Basic_3_FieldInfo = 
{
	"Basic"/* name */
	, &UriHostNameType_t1323_0_0_32854/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1323_0_0_32854;
FieldInfo UriHostNameType_t1323____Dns_4_FieldInfo = 
{
	"Dns"/* name */
	, &UriHostNameType_t1323_0_0_32854/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1323_0_0_32854;
FieldInfo UriHostNameType_t1323____IPv4_5_FieldInfo = 
{
	"IPv4"/* name */
	, &UriHostNameType_t1323_0_0_32854/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1323_0_0_32854;
FieldInfo UriHostNameType_t1323____IPv6_6_FieldInfo = 
{
	"IPv6"/* name */
	, &UriHostNameType_t1323_0_0_32854/* type */
	, &UriHostNameType_t1323_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriHostNameType_t1323_FieldInfos[] =
{
	&UriHostNameType_t1323____value___1_FieldInfo,
	&UriHostNameType_t1323____Unknown_2_FieldInfo,
	&UriHostNameType_t1323____Basic_3_FieldInfo,
	&UriHostNameType_t1323____Dns_4_FieldInfo,
	&UriHostNameType_t1323____IPv4_5_FieldInfo,
	&UriHostNameType_t1323____IPv6_6_FieldInfo,
	NULL
};
static const int32_t UriHostNameType_t1323____Unknown_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1323____Unknown_2_DefaultValue = 
{
	&UriHostNameType_t1323____Unknown_2_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1323____Unknown_2_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1323____Basic_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1323____Basic_3_DefaultValue = 
{
	&UriHostNameType_t1323____Basic_3_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1323____Basic_3_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1323____Dns_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1323____Dns_4_DefaultValue = 
{
	&UriHostNameType_t1323____Dns_4_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1323____Dns_4_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1323____IPv4_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1323____IPv4_5_DefaultValue = 
{
	&UriHostNameType_t1323____IPv4_5_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1323____IPv4_5_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1323____IPv6_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1323____IPv6_6_DefaultValue = 
{
	&UriHostNameType_t1323____IPv6_6_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1323____IPv6_6_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriHostNameType_t1323_FieldDefaultValues[] = 
{
	&UriHostNameType_t1323____Unknown_2_DefaultValue,
	&UriHostNameType_t1323____Basic_3_DefaultValue,
	&UriHostNameType_t1323____Dns_4_DefaultValue,
	&UriHostNameType_t1323____IPv4_5_DefaultValue,
	&UriHostNameType_t1323____IPv6_6_DefaultValue,
	NULL
};
static Il2CppMethodReference UriHostNameType_t1323_VTable[] =
{
	&Enum_Equals_m1067_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Enum_GetHashCode_m1069_MethodInfo,
	&Enum_ToString_m1070_MethodInfo,
	&Enum_ToString_m1071_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1072_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1073_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1074_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1075_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1076_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1077_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1078_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1079_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1080_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1081_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1082_MethodInfo,
	&Enum_ToString_m1083_MethodInfo,
	&Enum_System_IConvertible_ToType_m1084_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1085_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1086_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1087_MethodInfo,
	&Enum_CompareTo_m1088_MethodInfo,
	&Enum_GetTypeCode_m1089_MethodInfo,
};
static bool UriHostNameType_t1323_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriHostNameType_t1323_InterfacesOffsets[] = 
{
	{ &IFormattable_t224_0_0_0, 4},
	{ &IConvertible_t225_0_0_0, 5},
	{ &IComparable_t226_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriHostNameType_t1323_0_0_0;
extern Il2CppType UriHostNameType_t1323_1_0_0;
const Il2CppTypeDefinitionMetadata UriHostNameType_t1323_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriHostNameType_t1323_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t227_0_0_0/* parent */
	, UriHostNameType_t1323_VTable/* vtableMethods */
	, UriHostNameType_t1323_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriHostNameType_t1323_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriHostNameType"/* name */
	, "System"/* namespaze */
	, UriHostNameType_t1323_MethodInfos/* methods */
	, NULL/* properties */
	, UriHostNameType_t1323_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriHostNameType_t1323_0_0_0/* byval_arg */
	, &UriHostNameType_t1323_1_0_0/* this_arg */
	, &UriHostNameType_t1323_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriHostNameType_t1323_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriHostNameType_t1323)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriHostNameType_t1323)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriKind
#include "System_System_UriKind.h"
// Metadata Definition System.UriKind
extern TypeInfo UriKind_t1324_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
static MethodInfo* UriKind_t1324_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t188_0_0_1542;
FieldInfo UriKind_t1324____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t188_0_0_1542/* type */
	, &UriKind_t1324_il2cpp_TypeInfo/* parent */
	, offsetof(UriKind_t1324, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1324_0_0_32854;
FieldInfo UriKind_t1324____RelativeOrAbsolute_2_FieldInfo = 
{
	"RelativeOrAbsolute"/* name */
	, &UriKind_t1324_0_0_32854/* type */
	, &UriKind_t1324_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1324_0_0_32854;
FieldInfo UriKind_t1324____Absolute_3_FieldInfo = 
{
	"Absolute"/* name */
	, &UriKind_t1324_0_0_32854/* type */
	, &UriKind_t1324_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1324_0_0_32854;
FieldInfo UriKind_t1324____Relative_4_FieldInfo = 
{
	"Relative"/* name */
	, &UriKind_t1324_0_0_32854/* type */
	, &UriKind_t1324_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriKind_t1324_FieldInfos[] =
{
	&UriKind_t1324____value___1_FieldInfo,
	&UriKind_t1324____RelativeOrAbsolute_2_FieldInfo,
	&UriKind_t1324____Absolute_3_FieldInfo,
	&UriKind_t1324____Relative_4_FieldInfo,
	NULL
};
static const int32_t UriKind_t1324____RelativeOrAbsolute_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriKind_t1324____RelativeOrAbsolute_2_DefaultValue = 
{
	&UriKind_t1324____RelativeOrAbsolute_2_FieldInfo/* field */
	, { (char*)&UriKind_t1324____RelativeOrAbsolute_2_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriKind_t1324____Absolute_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriKind_t1324____Absolute_3_DefaultValue = 
{
	&UriKind_t1324____Absolute_3_FieldInfo/* field */
	, { (char*)&UriKind_t1324____Absolute_3_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriKind_t1324____Relative_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriKind_t1324____Relative_4_DefaultValue = 
{
	&UriKind_t1324____Relative_4_FieldInfo/* field */
	, { (char*)&UriKind_t1324____Relative_4_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriKind_t1324_FieldDefaultValues[] = 
{
	&UriKind_t1324____RelativeOrAbsolute_2_DefaultValue,
	&UriKind_t1324____Absolute_3_DefaultValue,
	&UriKind_t1324____Relative_4_DefaultValue,
	NULL
};
static Il2CppMethodReference UriKind_t1324_VTable[] =
{
	&Enum_Equals_m1067_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Enum_GetHashCode_m1069_MethodInfo,
	&Enum_ToString_m1070_MethodInfo,
	&Enum_ToString_m1071_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1072_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1073_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1074_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1075_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1076_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1077_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1078_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1079_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1080_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1081_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1082_MethodInfo,
	&Enum_ToString_m1083_MethodInfo,
	&Enum_System_IConvertible_ToType_m1084_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1085_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1086_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1087_MethodInfo,
	&Enum_CompareTo_m1088_MethodInfo,
	&Enum_GetTypeCode_m1089_MethodInfo,
};
static bool UriKind_t1324_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriKind_t1324_InterfacesOffsets[] = 
{
	{ &IFormattable_t224_0_0_0, 4},
	{ &IConvertible_t225_0_0_0, 5},
	{ &IComparable_t226_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriKind_t1324_1_0_0;
const Il2CppTypeDefinitionMetadata UriKind_t1324_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriKind_t1324_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t227_0_0_0/* parent */
	, UriKind_t1324_VTable/* vtableMethods */
	, UriKind_t1324_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriKind_t1324_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriKind"/* name */
	, "System"/* namespaze */
	, UriKind_t1324_MethodInfos/* methods */
	, NULL/* properties */
	, UriKind_t1324_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriKind_t1324_0_0_0/* byval_arg */
	, &UriKind_t1324_1_0_0/* this_arg */
	, &UriKind_t1324_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriKind_t1324_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriKind_t1324)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriKind_t1324)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriParser
#include "System_System_UriParser.h"
// Metadata Definition System.UriParser
extern TypeInfo UriParser_t1318_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
MethodInfo UriParser__ctor_m5942_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m5942/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
MethodInfo UriParser__cctor_m5943_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m5943/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t804_0_0_0;
extern Il2CppType UriFormatException_t1322_1_0_2;
static ParameterInfo UriParser_t1318_UriParser_InitializeAndValidate_m5944_ParameterInfos[] = 
{
	{"uri", 0, 134218672, &EmptyCustomAttributesCache, &Uri_t804_0_0_0},
	{"parsingError", 1, 134218673, &EmptyCustomAttributesCache, &UriFormatException_t1322_1_0_2},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_UriFormatExceptionU26_t1377 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
MethodInfo UriParser_InitializeAndValidate_m5944_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m5944/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_UriFormatExceptionU26_t1377/* invoker_method */
	, UriParser_t1318_UriParser_InitializeAndValidate_m5944_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo UriParser_t1318_UriParser_OnRegister_m5945_ParameterInfos[] = 
{
	{"schemeName", 0, 134218674, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 1, 134218675, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache UriParser_t1318__CustomAttributeCache_UriParser_OnRegister_m5945;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
MethodInfo UriParser_OnRegister_m5945_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m5945/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Int32_t188/* invoker_method */
	, UriParser_t1318_UriParser_OnRegister_m5945_ParameterInfos/* parameters */
	, &UriParser_t1318__CustomAttributeCache_UriParser_OnRegister_m5945/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1318_UriParser_set_SchemeName_m5946_ParameterInfos[] = 
{
	{"value", 0, 134218676, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
MethodInfo UriParser_set_SchemeName_m5946_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m5946/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t/* invoker_method */
	, UriParser_t1318_UriParser_set_SchemeName_m5946_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
extern void* RuntimeInvoker_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
MethodInfo UriParser_get_DefaultPort_m5947_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m5947/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t188_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t188/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo UriParser_t1318_UriParser_set_DefaultPort_m5948_ParameterInfos[] = 
{
	{"value", 0, 134218677, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
MethodInfo UriParser_set_DefaultPort_m5948_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m5948/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Int32_t188/* invoker_method */
	, UriParser_t1318_UriParser_set_DefaultPort_m5948_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
MethodInfo UriParser_CreateDefaults_m5949_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m5949/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t1149_0_0_0;
extern Il2CppType UriParser_t1318_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t188_0_0_0;
static ParameterInfo UriParser_t1318_UriParser_InternalRegister_m5950_ParameterInfos[] = 
{
	{"table", 0, 134218678, &EmptyCustomAttributesCache, &Hashtable_t1149_0_0_0},
	{"uriParser", 1, 134218679, &EmptyCustomAttributesCache, &UriParser_t1318_0_0_0},
	{"schemeName", 2, 134218680, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 3, 134218681, &EmptyCustomAttributesCache, &Int32_t188_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_Object_t_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
MethodInfo UriParser_InternalRegister_m5950_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m5950/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_Object_t_Object_t_Int32_t188/* invoker_method */
	, UriParser_t1318_UriParser_InternalRegister_m5950_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1318_UriParser_GetParser_m5951_ParameterInfos[] = 
{
	{"schemeName", 0, 134218682, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriParser_t1318_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
MethodInfo UriParser_GetParser_m5951_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m5951/* method */
	, &UriParser_t1318_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1318_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t1318_UriParser_GetParser_m5951_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriParser_t1318_MethodInfos[] =
{
	&UriParser__ctor_m5942_MethodInfo,
	&UriParser__cctor_m5943_MethodInfo,
	&UriParser_InitializeAndValidate_m5944_MethodInfo,
	&UriParser_OnRegister_m5945_MethodInfo,
	&UriParser_set_SchemeName_m5946_MethodInfo,
	&UriParser_get_DefaultPort_m5947_MethodInfo,
	&UriParser_set_DefaultPort_m5948_MethodInfo,
	&UriParser_CreateDefaults_m5949_MethodInfo,
	&UriParser_InternalRegister_m5950_MethodInfo,
	&UriParser_GetParser_m5951_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_17;
FieldInfo UriParser_t1318____lock_object_0_FieldInfo = 
{
	"lock_object"/* name */
	, &Object_t_0_0_17/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318_StaticFields, ___lock_object_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1149_0_0_17;
FieldInfo UriParser_t1318____table_1_FieldInfo = 
{
	"table"/* name */
	, &Hashtable_t1149_0_0_17/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318_StaticFields, ___table_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_3;
FieldInfo UriParser_t1318____scheme_name_2_FieldInfo = 
{
	"scheme_name"/* name */
	, &String_t_0_0_3/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318, ___scheme_name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t188_0_0_1;
FieldInfo UriParser_t1318____default_port_3_FieldInfo = 
{
	"default_port"/* name */
	, &Int32_t188_0_0_1/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318, ___default_port_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t959_0_0_49;
FieldInfo UriParser_t1318____uri_regex_4_FieldInfo = 
{
	"uri_regex"/* name */
	, &Regex_t959_0_0_49/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318_StaticFields, ___uri_regex_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t959_0_0_49;
FieldInfo UriParser_t1318____auth_regex_5_FieldInfo = 
{
	"auth_regex"/* name */
	, &Regex_t959_0_0_49/* type */
	, &UriParser_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1318_StaticFields, ___auth_regex_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriParser_t1318_FieldInfos[] =
{
	&UriParser_t1318____lock_object_0_FieldInfo,
	&UriParser_t1318____table_1_FieldInfo,
	&UriParser_t1318____scheme_name_2_FieldInfo,
	&UriParser_t1318____default_port_3_FieldInfo,
	&UriParser_t1318____uri_regex_4_FieldInfo,
	&UriParser_t1318____auth_regex_5_FieldInfo,
	NULL
};
extern MethodInfo UriParser_set_SchemeName_m5946_MethodInfo;
static PropertyInfo UriParser_t1318____SchemeName_PropertyInfo = 
{
	&UriParser_t1318_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m5946_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo UriParser_get_DefaultPort_m5947_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m5948_MethodInfo;
static PropertyInfo UriParser_t1318____DefaultPort_PropertyInfo = 
{
	&UriParser_t1318_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m5947_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m5948_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* UriParser_t1318_PropertyInfos[] =
{
	&UriParser_t1318____SchemeName_PropertyInfo,
	&UriParser_t1318____DefaultPort_PropertyInfo,
	NULL
};
static Il2CppMethodReference UriParser_t1318_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&UriParser_InitializeAndValidate_m5944_MethodInfo,
	&UriParser_OnRegister_m5945_MethodInfo,
};
static bool UriParser_t1318_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern TypeInfo MonoTODOAttribute_t1148_il2cpp_TypeInfo;
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttributeMethodDeclarations.h"
extern MethodInfo MonoTODOAttribute__ctor_m5064_MethodInfo;
void UriParser_t1318_CustomAttributesCacheGenerator_UriParser_OnRegister_m5945(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		MonoTODOAttribute_t1148 * tmp;
		tmp = (MonoTODOAttribute_t1148 *)il2cpp_codegen_object_new (&MonoTODOAttribute_t1148_il2cpp_TypeInfo);
		MonoTODOAttribute__ctor_m5064(tmp, &MonoTODOAttribute__ctor_m5064_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UriParser_t1318__CustomAttributeCache_UriParser_OnRegister_m5945 = {
1,
NULL,
&UriParser_t1318_CustomAttributesCacheGenerator_UriParser_OnRegister_m5945
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriParser_t1318_1_0_0;
struct UriParser_t1318;
extern CustomAttributesCache UriParser_t1318__CustomAttributeCache_UriParser_OnRegister_m5945;
const Il2CppTypeDefinitionMetadata UriParser_t1318_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UriParser_t1318_VTable/* vtableMethods */
	, UriParser_t1318_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriParser_t1318_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t1318_MethodInfos/* methods */
	, UriParser_t1318_PropertyInfos/* properties */
	, UriParser_t1318_FieldInfos/* fields */
	, NULL/* events */
	, &UriParser_t1318_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriParser_t1318_0_0_0/* byval_arg */
	, &UriParser_t1318_1_0_0/* this_arg */
	, &UriParser_t1318_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t1318)/* instance_size */
	, sizeof (UriParser_t1318)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t1318_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
// Metadata Definition System.UriPartial
extern TypeInfo UriPartial_t1325_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
static MethodInfo* UriPartial_t1325_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t188_0_0_1542;
FieldInfo UriPartial_t1325____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t188_0_0_1542/* type */
	, &UriPartial_t1325_il2cpp_TypeInfo/* parent */
	, offsetof(UriPartial_t1325, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1325_0_0_32854;
FieldInfo UriPartial_t1325____Scheme_2_FieldInfo = 
{
	"Scheme"/* name */
	, &UriPartial_t1325_0_0_32854/* type */
	, &UriPartial_t1325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1325_0_0_32854;
FieldInfo UriPartial_t1325____Authority_3_FieldInfo = 
{
	"Authority"/* name */
	, &UriPartial_t1325_0_0_32854/* type */
	, &UriPartial_t1325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1325_0_0_32854;
FieldInfo UriPartial_t1325____Path_4_FieldInfo = 
{
	"Path"/* name */
	, &UriPartial_t1325_0_0_32854/* type */
	, &UriPartial_t1325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1325_0_0_32854;
FieldInfo UriPartial_t1325____Query_5_FieldInfo = 
{
	"Query"/* name */
	, &UriPartial_t1325_0_0_32854/* type */
	, &UriPartial_t1325_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriPartial_t1325_FieldInfos[] =
{
	&UriPartial_t1325____value___1_FieldInfo,
	&UriPartial_t1325____Scheme_2_FieldInfo,
	&UriPartial_t1325____Authority_3_FieldInfo,
	&UriPartial_t1325____Path_4_FieldInfo,
	&UriPartial_t1325____Query_5_FieldInfo,
	NULL
};
static const int32_t UriPartial_t1325____Scheme_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriPartial_t1325____Scheme_2_DefaultValue = 
{
	&UriPartial_t1325____Scheme_2_FieldInfo/* field */
	, { (char*)&UriPartial_t1325____Scheme_2_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriPartial_t1325____Authority_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriPartial_t1325____Authority_3_DefaultValue = 
{
	&UriPartial_t1325____Authority_3_FieldInfo/* field */
	, { (char*)&UriPartial_t1325____Authority_3_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriPartial_t1325____Path_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriPartial_t1325____Path_4_DefaultValue = 
{
	&UriPartial_t1325____Path_4_FieldInfo/* field */
	, { (char*)&UriPartial_t1325____Path_4_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static const int32_t UriPartial_t1325____Query_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriPartial_t1325____Query_5_DefaultValue = 
{
	&UriPartial_t1325____Query_5_FieldInfo/* field */
	, { (char*)&UriPartial_t1325____Query_5_DefaultValueData, &Int32_t188_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriPartial_t1325_FieldDefaultValues[] = 
{
	&UriPartial_t1325____Scheme_2_DefaultValue,
	&UriPartial_t1325____Authority_3_DefaultValue,
	&UriPartial_t1325____Path_4_DefaultValue,
	&UriPartial_t1325____Query_5_DefaultValue,
	NULL
};
static Il2CppMethodReference UriPartial_t1325_VTable[] =
{
	&Enum_Equals_m1067_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Enum_GetHashCode_m1069_MethodInfo,
	&Enum_ToString_m1070_MethodInfo,
	&Enum_ToString_m1071_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1072_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1073_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1074_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1075_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1076_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1077_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1078_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1079_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1080_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1081_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1082_MethodInfo,
	&Enum_ToString_m1083_MethodInfo,
	&Enum_System_IConvertible_ToType_m1084_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1085_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1086_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1087_MethodInfo,
	&Enum_CompareTo_m1088_MethodInfo,
	&Enum_GetTypeCode_m1089_MethodInfo,
};
static bool UriPartial_t1325_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriPartial_t1325_InterfacesOffsets[] = 
{
	{ &IFormattable_t224_0_0_0, 4},
	{ &IConvertible_t225_0_0_0, 5},
	{ &IComparable_t226_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriPartial_t1325_1_0_0;
const Il2CppTypeDefinitionMetadata UriPartial_t1325_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriPartial_t1325_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t227_0_0_0/* parent */
	, UriPartial_t1325_VTable/* vtableMethods */
	, UriPartial_t1325_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriPartial_t1325_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t1325_MethodInfos/* methods */
	, NULL/* properties */
	, UriPartial_t1325_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriPartial_t1325_0_0_0/* byval_arg */
	, &UriPartial_t1325_1_0_0/* this_arg */
	, &UriPartial_t1325_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriPartial_t1325_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t1325)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriPartial_t1325)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// Metadata Definition System.UriTypeConverter
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
static MethodInfo* UriTypeConverter_t1326_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference UriTypeConverter_t1326_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool UriTypeConverter_t1326_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriTypeConverter_t1326_1_0_0;
extern Il2CppType TypeConverter_t1166_0_0_0;
struct UriTypeConverter_t1326;
const Il2CppTypeDefinitionMetadata UriTypeConverter_t1326_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TypeConverter_t1166_0_0_0/* parent */
	, UriTypeConverter_t1326_VTable/* vtableMethods */
	, UriTypeConverter_t1326_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriTypeConverter_t1326_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t1326_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriTypeConverter_t1326_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriTypeConverter_t1326_0_0_0/* byval_arg */
	, &UriTypeConverter_t1326_1_0_0/* this_arg */
	, &UriTypeConverter_t1326_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t1326)/* instance_size */
	, sizeof (UriTypeConverter_t1326)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern TypeInfo RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback__ctor_m5952_ParameterInfos[] = 
{
	{"object", 0, 134218683, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218684, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo RemoteCertificateValidationCallback__ctor_m5952_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback__ctor_m5952/* method */
	, &RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_IntPtr_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback__ctor_m5952_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t1173_0_0_0;
extern Il2CppType X509Certificate_t1173_0_0_0;
extern Il2CppType X509Chain_t1182_0_0_0;
extern Il2CppType X509Chain_t1182_0_0_0;
extern Il2CppType SslPolicyErrors_t1169_0_0_0;
extern Il2CppType SslPolicyErrors_t1169_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_Invoke_m5953_ParameterInfos[] = 
{
	{"sender", 0, 134218685, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218686, &EmptyCustomAttributesCache, &X509Certificate_t1173_0_0_0},
	{"chain", 2, 134218687, &EmptyCustomAttributesCache, &X509Chain_t1182_0_0_0},
	{"sslPolicyErrors", 3, 134218688, &EmptyCustomAttributesCache, &SslPolicyErrors_t1169_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t_Object_t_Object_t_Int32_t188 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
MethodInfo RemoteCertificateValidationCallback_Invoke_m5953_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_Invoke_m5953/* method */
	, &RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t_Object_t_Object_t_Int32_t188/* invoker_method */
	, RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_Invoke_m5953_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t1173_0_0_0;
extern Il2CppType X509Chain_t1182_0_0_0;
extern Il2CppType SslPolicyErrors_t1169_0_0_0;
extern Il2CppType AsyncCallback_t426_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_BeginInvoke_m5954_ParameterInfos[] = 
{
	{"sender", 0, 134218689, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218690, &EmptyCustomAttributesCache, &X509Certificate_t1173_0_0_0},
	{"chain", 2, 134218691, &EmptyCustomAttributesCache, &X509Chain_t1182_0_0_0},
	{"sslPolicyErrors", 3, 134218692, &EmptyCustomAttributesCache, &SslPolicyErrors_t1169_0_0_0},
	{"callback", 4, 134218693, &EmptyCustomAttributesCache, &AsyncCallback_t426_0_0_0},
	{"object", 5, 134218694, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t425_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t188_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m5954_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_BeginInvoke_m5954/* method */
	, &RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t425_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t188_Object_t_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_BeginInvoke_m5954_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t425_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_EndInvoke_m5955_ParameterInfos[] = 
{
	{"result", 0, 134218695, &EmptyCustomAttributesCache, &IAsyncResult_t425_0_0_0},
};
extern Il2CppType Boolean_t202_0_0_0;
extern void* RuntimeInvoker_Boolean_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo RemoteCertificateValidationCallback_EndInvoke_m5955_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_EndInvoke_m5955/* method */
	, &RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t202_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t202_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1180_RemoteCertificateValidationCallback_EndInvoke_m5955_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RemoteCertificateValidationCallback_t1180_MethodInfos[] =
{
	&RemoteCertificateValidationCallback__ctor_m5952_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m5953_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m5954_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m5955_MethodInfo,
	NULL
};
extern MethodInfo RemoteCertificateValidationCallback_Invoke_m5953_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m5954_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_EndInvoke_m5955_MethodInfo;
static Il2CppMethodReference RemoteCertificateValidationCallback_t1180_VTable[] =
{
	&MulticastDelegate_Equals_m3111_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&MulticastDelegate_GetHashCode_m3112_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&Delegate_Clone_m3114_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3115_MethodInfo,
	&MulticastDelegate_CombineImpl_m3116_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3117_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m5953_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m5954_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m5955_MethodInfo,
};
static bool RemoteCertificateValidationCallback_t1180_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RemoteCertificateValidationCallback_t1180_InterfacesOffsets[] = 
{
	{ &ICloneable_t572_0_0_0, 4},
	{ &ISerializable_t573_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RemoteCertificateValidationCallback_t1180_0_0_0;
extern Il2CppType RemoteCertificateValidationCallback_t1180_1_0_0;
struct RemoteCertificateValidationCallback_t1180;
const Il2CppTypeDefinitionMetadata RemoteCertificateValidationCallback_t1180_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RemoteCertificateValidationCallback_t1180_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t429_0_0_0/* parent */
	, RemoteCertificateValidationCallback_t1180_VTable/* vtableMethods */
	, RemoteCertificateValidationCallback_t1180_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemoteCertificateValidationCallback"/* name */
	, "System.Net.Security"/* namespaze */
	, RemoteCertificateValidationCallback_t1180_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &RemoteCertificateValidationCallback_t1180_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RemoteCertificateValidationCallback_t1180_0_0_0/* byval_arg */
	, &RemoteCertificateValidationCallback_t1180_1_0_0/* this_arg */
	, &RemoteCertificateValidationCallback_t1180_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1180/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemoteCertificateValidationCallback_t1180)/* instance_size */
	, sizeof (RemoteCertificateValidationCallback_t1180)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.MatchEvaluator
extern TypeInfo MatchEvaluator_t1254_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo MatchEvaluator_t1254_MatchEvaluator__ctor_m5956_ParameterInfos[] = 
{
	{"object", 0, 134218696, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218697, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t183_0_0_0;
extern void* RuntimeInvoker_Void_t183_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
MethodInfo MatchEvaluator__ctor_m5956_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchEvaluator__ctor_m5956/* method */
	, &MatchEvaluator_t1254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t183_0_0_0/* return_type */
	, RuntimeInvoker_Void_t183_Object_t_IntPtr_t/* invoker_method */
	, MatchEvaluator_t1254_MatchEvaluator__ctor_m5956_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1251_0_0_0;
static ParameterInfo MatchEvaluator_t1254_MatchEvaluator_Invoke_m5957_ParameterInfos[] = 
{
	{"match", 0, 134218698, &EmptyCustomAttributesCache, &Match_t1251_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
MethodInfo MatchEvaluator_Invoke_m5957_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MatchEvaluator_Invoke_m5957/* method */
	, &MatchEvaluator_t1254_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1254_MatchEvaluator_Invoke_m5957_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1251_0_0_0;
extern Il2CppType AsyncCallback_t426_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MatchEvaluator_t1254_MatchEvaluator_BeginInvoke_m5958_ParameterInfos[] = 
{
	{"match", 0, 134218699, &EmptyCustomAttributesCache, &Match_t1251_0_0_0},
	{"callback", 1, 134218700, &EmptyCustomAttributesCache, &AsyncCallback_t426_0_0_0},
	{"object", 2, 134218701, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t425_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
MethodInfo MatchEvaluator_BeginInvoke_m5958_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_BeginInvoke_m5958/* method */
	, &MatchEvaluator_t1254_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t425_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1254_MatchEvaluator_BeginInvoke_m5958_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t425_0_0_0;
static ParameterInfo MatchEvaluator_t1254_MatchEvaluator_EndInvoke_m5959_ParameterInfos[] = 
{
	{"result", 0, 134218702, &EmptyCustomAttributesCache, &IAsyncResult_t425_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
MethodInfo MatchEvaluator_EndInvoke_m5959_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_EndInvoke_m5959/* method */
	, &MatchEvaluator_t1254_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1254_MatchEvaluator_EndInvoke_m5959_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MatchEvaluator_t1254_MethodInfos[] =
{
	&MatchEvaluator__ctor_m5956_MethodInfo,
	&MatchEvaluator_Invoke_m5957_MethodInfo,
	&MatchEvaluator_BeginInvoke_m5958_MethodInfo,
	&MatchEvaluator_EndInvoke_m5959_MethodInfo,
	NULL
};
extern MethodInfo MatchEvaluator_Invoke_m5957_MethodInfo;
extern MethodInfo MatchEvaluator_BeginInvoke_m5958_MethodInfo;
extern MethodInfo MatchEvaluator_EndInvoke_m5959_MethodInfo;
static Il2CppMethodReference MatchEvaluator_t1254_VTable[] =
{
	&MulticastDelegate_Equals_m3111_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&MulticastDelegate_GetHashCode_m3112_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&Delegate_Clone_m3114_MethodInfo,
	&MulticastDelegate_GetObjectData_m3113_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3115_MethodInfo,
	&MulticastDelegate_CombineImpl_m3116_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3117_MethodInfo,
	&MatchEvaluator_Invoke_m5957_MethodInfo,
	&MatchEvaluator_BeginInvoke_m5958_MethodInfo,
	&MatchEvaluator_EndInvoke_m5959_MethodInfo,
};
static bool MatchEvaluator_t1254_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MatchEvaluator_t1254_InterfacesOffsets[] = 
{
	{ &ICloneable_t572_0_0_0, 4},
	{ &ISerializable_t573_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MatchEvaluator_t1254_0_0_0;
extern Il2CppType MatchEvaluator_t1254_1_0_0;
struct MatchEvaluator_t1254;
const Il2CppTypeDefinitionMetadata MatchEvaluator_t1254_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MatchEvaluator_t1254_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t429_0_0_0/* parent */
	, MatchEvaluator_t1254_VTable/* vtableMethods */
	, MatchEvaluator_t1254_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo MatchEvaluator_t1254_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MatchEvaluator_t1254_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MatchEvaluator_t1254_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MatchEvaluator_t1254_0_0_0/* byval_arg */
	, &MatchEvaluator_t1254_1_0_0/* this_arg */
	, &MatchEvaluator_t1254_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MatchEvaluator_t1254/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchEvaluator_t1254)/* instance_size */
	, sizeof (MatchEvaluator_t1254)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo $ArrayType$128_t1327_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128MethodDeclarations.h"
static MethodInfo* $ArrayType$128_t1327_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$128_t1327_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool $ArrayType$128_t1327_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$128_t1327_0_0_0;
extern Il2CppType $ArrayType$128_t1327_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1329_0_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$128_t1327_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1329_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, $ArrayType$128_t1327_VTable/* vtableMethods */
	, $ArrayType$128_t1327_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$128_t1327_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, $ArrayType$128_t1327_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$128_t1327_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$128_t1327_0_0_0/* byval_arg */
	, &$ArrayType$128_t1327_1_0_0/* this_arg */
	, &$ArrayType$128_t1327_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$128_t1327_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$128_t1327_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$128_t1327_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$128_t1327)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$128_t1327)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$128_t1327_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo $ArrayType$12_t1328_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12MethodDeclarations.h"
static MethodInfo* $ArrayType$12_t1328_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$12_t1328_VTable[] =
{
	&ValueType_Equals_m1103_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&ValueType_GetHashCode_m1104_MethodInfo,
	&ValueType_ToString_m1105_MethodInfo,
};
static bool $ArrayType$12_t1328_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$12_t1328_0_0_0;
extern Il2CppType $ArrayType$12_t1328_1_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$12_t1328_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1329_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t249_0_0_0/* parent */
	, $ArrayType$12_t1328_VTable/* vtableMethods */
	, $ArrayType$12_t1328_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$12_t1328_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t1328_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$12_t1328_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t1328_0_0_0/* byval_arg */
	, &$ArrayType$12_t1328_1_0_0/* this_arg */
	, &$ArrayType$12_t1328_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$12_t1328_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$12_t1328_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$12_t1328_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t1328)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$12_t1328)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$12_t1328_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static MethodInfo* U3CPrivateImplementationDetailsU3E_t1329_MethodInfos[] =
{
	NULL
};
extern Il2CppType $ArrayType$128_t1327_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_FieldInfo = 
{
	"$$field-2"/* name */
	, &$ArrayType$128_t1327_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1329_StaticFields, ___$$fieldU2D2_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1328_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_FieldInfo = 
{
	"$$field-3"/* name */
	, &$ArrayType$12_t1328_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1329_StaticFields, ___$$fieldU2D3_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1328_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_FieldInfo = 
{
	"$$field-4"/* name */
	, &$ArrayType$12_t1328_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1329_StaticFields, ___$$fieldU2D4_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t1329_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_DefaultValueData[] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_DefaultValueData, &$ArrayType$128_t1327_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_DefaultValueData, &$ArrayType$12_t1328_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x7, 0x2, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_DefaultValueData, &$ArrayType$12_t1328_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t1329_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D2_0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D3_1_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1329____$$fieldU2D4_2_DefaultValue,
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo__nestedTypes[2] =
{
	&$ArrayType$128_t1327_0_0_0,
	&$ArrayType$12_t1328_0_0_0,
};
static Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1329_VTable[] =
{
	&Object_Equals_m1096_MethodInfo,
	&Object_Finalize_m1068_MethodInfo,
	&Object_GetHashCode_m1097_MethodInfo,
	&Object_ToString_m1098_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1329_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
void U3CPrivateImplementationDetailsU3E_t1329_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t233 * tmp;
		tmp = (CompilerGeneratedAttribute_t233 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t233_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m1099(tmp, &CompilerGeneratedAttribute__ctor_m1099_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1329__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t1329_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1329_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1329;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1329__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1329_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1329_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1329_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1329_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t1329_FieldInfos/* fields */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1329_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t1329__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1329_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1329_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1329_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t1329_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1329)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1329)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1329_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
