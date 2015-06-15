#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2707;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.String[]
struct StringU5BU5D_t215;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3774;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2705;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m13358(__this, method) (( void (*) (Collection_1_t2707 *, MethodInfo*))Collection_1__ctor_m13227_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13359(__this, method) (( bool (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13228_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m13360(__this, ___array, ___index, method) (( void (*) (Collection_1_t2707 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13229_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13361(__this, method) (( Object_t * (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13230_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m13362(__this, ___value, method) (( int32_t (*) (Collection_1_t2707 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m13231_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m13363(__this, ___value, method) (( bool (*) (Collection_1_t2707 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m13232_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m13364(__this, ___value, method) (( int32_t (*) (Collection_1_t2707 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13233_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m13365(__this, ___index, ___value, method) (( void (*) (Collection_1_t2707 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m13234_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m13366(__this, ___value, method) (( void (*) (Collection_1_t2707 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m13235_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13367(__this, method) (( bool (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13236_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13368(__this, method) (( Object_t * (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13237_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13369(__this, method) (( bool (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13238_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13370(__this, method) (( bool (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13239_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m13371(__this, ___index, method) (( Object_t * (*) (Collection_1_t2707 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13240_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m13372(__this, ___index, ___value, method) (( void (*) (Collection_1_t2707 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13241_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m13373(__this, ___item, method) (( void (*) (Collection_1_t2707 *, String_t*, MethodInfo*))Collection_1_Add_m13242_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m13374(__this, method) (( void (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_Clear_m13243_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m13375(__this, method) (( void (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_ClearItems_m13244_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m13376(__this, ___item, method) (( bool (*) (Collection_1_t2707 *, String_t*, MethodInfo*))Collection_1_Contains_m13245_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m13377(__this, ___array, ___index, method) (( void (*) (Collection_1_t2707 *, StringU5BU5D_t215*, int32_t, MethodInfo*))Collection_1_CopyTo_m13246_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m13378(__this, method) (( Object_t* (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_GetEnumerator_m13247_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m13379(__this, ___item, method) (( int32_t (*) (Collection_1_t2707 *, String_t*, MethodInfo*))Collection_1_IndexOf_m13248_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m13380(__this, ___index, ___item, method) (( void (*) (Collection_1_t2707 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m13249_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m13381(__this, ___index, ___item, method) (( void (*) (Collection_1_t2707 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m13250_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m13382(__this, ___item, method) (( bool (*) (Collection_1_t2707 *, String_t*, MethodInfo*))Collection_1_Remove_m13251_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m13383(__this, ___index, method) (( void (*) (Collection_1_t2707 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m13252_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m13384(__this, ___index, method) (( void (*) (Collection_1_t2707 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m13253_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m13385(__this, method) (( int32_t (*) (Collection_1_t2707 *, MethodInfo*))Collection_1_get_Count_m13254_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m13386(__this, ___index, method) (( String_t* (*) (Collection_1_t2707 *, int32_t, MethodInfo*))Collection_1_get_Item_m13255_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m13387(__this, ___index, ___value, method) (( void (*) (Collection_1_t2707 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m13256_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m13388(__this, ___index, ___item, method) (( void (*) (Collection_1_t2707 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m13257_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m13389(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m13258_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m13390(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m13259_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m13391(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m13260_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m13392(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m13261_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m13393(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m13262_gshared)(__this /* static, unused */, ___list, method)
