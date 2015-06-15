#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3744;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3741;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3993;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1941;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m23428(__this, method) (( void (*) (Collection_1_t3744 *, MethodInfo*))Collection_1__ctor_m13227_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23429(__this, method) (( bool (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13228_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m23430(__this, ___array, ___index, method) (( void (*) (Collection_1_t3744 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13229_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m23431(__this, method) (( Object_t * (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13230_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m23432(__this, ___value, method) (( int32_t (*) (Collection_1_t3744 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m13231_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m23433(__this, ___value, method) (( bool (*) (Collection_1_t3744 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m13232_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m23434(__this, ___value, method) (( int32_t (*) (Collection_1_t3744 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13233_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m23435(__this, ___index, ___value, method) (( void (*) (Collection_1_t3744 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m13234_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m23436(__this, ___value, method) (( void (*) (Collection_1_t3744 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m13235_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m23437(__this, method) (( bool (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13236_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m23438(__this, method) (( Object_t * (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13237_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m23439(__this, method) (( bool (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13238_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m23440(__this, method) (( bool (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13239_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m23441(__this, ___index, method) (( Object_t * (*) (Collection_1_t3744 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13240_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m23442(__this, ___index, ___value, method) (( void (*) (Collection_1_t3744 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13241_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m23443(__this, ___item, method) (( void (*) (Collection_1_t3744 *, StrongName_t1945 *, MethodInfo*))Collection_1_Add_m13242_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m23444(__this, method) (( void (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_Clear_m13243_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m23445(__this, method) (( void (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_ClearItems_m13244_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m23446(__this, ___item, method) (( bool (*) (Collection_1_t3744 *, StrongName_t1945 *, MethodInfo*))Collection_1_Contains_m13245_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m23447(__this, ___array, ___index, method) (( void (*) (Collection_1_t3744 *, StrongNameU5BU5D_t3741*, int32_t, MethodInfo*))Collection_1_CopyTo_m13246_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m23448(__this, method) (( Object_t* (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_GetEnumerator_m13247_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m23449(__this, ___item, method) (( int32_t (*) (Collection_1_t3744 *, StrongName_t1945 *, MethodInfo*))Collection_1_IndexOf_m13248_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m23450(__this, ___index, ___item, method) (( void (*) (Collection_1_t3744 *, int32_t, StrongName_t1945 *, MethodInfo*))Collection_1_Insert_m13249_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m23451(__this, ___index, ___item, method) (( void (*) (Collection_1_t3744 *, int32_t, StrongName_t1945 *, MethodInfo*))Collection_1_InsertItem_m13250_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m23452(__this, ___item, method) (( bool (*) (Collection_1_t3744 *, StrongName_t1945 *, MethodInfo*))Collection_1_Remove_m13251_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m23453(__this, ___index, method) (( void (*) (Collection_1_t3744 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m13252_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m23454(__this, ___index, method) (( void (*) (Collection_1_t3744 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m13253_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m23455(__this, method) (( int32_t (*) (Collection_1_t3744 *, MethodInfo*))Collection_1_get_Count_m13254_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m23456(__this, ___index, method) (( StrongName_t1945 * (*) (Collection_1_t3744 *, int32_t, MethodInfo*))Collection_1_get_Item_m13255_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m23457(__this, ___index, ___value, method) (( void (*) (Collection_1_t3744 *, int32_t, StrongName_t1945 *, MethodInfo*))Collection_1_set_Item_m13256_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m23458(__this, ___index, ___item, method) (( void (*) (Collection_1_t3744 *, int32_t, StrongName_t1945 *, MethodInfo*))Collection_1_SetItem_m13257_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m23459(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m13258_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m23460(__this /* static, unused */, ___item, method) (( StrongName_t1945 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m13259_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m23461(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m13260_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m23462(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m13261_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m23463(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m13262_gshared)(__this /* static, unused */, ___list, method)
