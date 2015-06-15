#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2705;
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
struct IEnumerator_1_t3772;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2703;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m13347(__this, method) (( void (*) (Collection_1_t2705 *, MethodInfo*))Collection_1__ctor_m13216_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13348(__this, method) (( bool (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13217_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m13349(__this, ___array, ___index, method) (( void (*) (Collection_1_t2705 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13218_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13350(__this, method) (( Object_t * (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13219_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m13351(__this, ___value, method) (( int32_t (*) (Collection_1_t2705 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m13220_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m13352(__this, ___value, method) (( bool (*) (Collection_1_t2705 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m13221_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m13353(__this, ___value, method) (( int32_t (*) (Collection_1_t2705 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13222_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m13354(__this, ___index, ___value, method) (( void (*) (Collection_1_t2705 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m13223_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m13355(__this, ___value, method) (( void (*) (Collection_1_t2705 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m13224_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13356(__this, method) (( bool (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13225_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13357(__this, method) (( Object_t * (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13226_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13358(__this, method) (( bool (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13227_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13359(__this, method) (( bool (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13228_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m13360(__this, ___index, method) (( Object_t * (*) (Collection_1_t2705 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13229_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m13361(__this, ___index, ___value, method) (( void (*) (Collection_1_t2705 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13230_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m13362(__this, ___item, method) (( void (*) (Collection_1_t2705 *, String_t*, MethodInfo*))Collection_1_Add_m13231_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m13363(__this, method) (( void (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_Clear_m13232_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m13364(__this, method) (( void (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_ClearItems_m13233_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m13365(__this, ___item, method) (( bool (*) (Collection_1_t2705 *, String_t*, MethodInfo*))Collection_1_Contains_m13234_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m13366(__this, ___array, ___index, method) (( void (*) (Collection_1_t2705 *, StringU5BU5D_t215*, int32_t, MethodInfo*))Collection_1_CopyTo_m13235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m13367(__this, method) (( Object_t* (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_GetEnumerator_m13236_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m13368(__this, ___item, method) (( int32_t (*) (Collection_1_t2705 *, String_t*, MethodInfo*))Collection_1_IndexOf_m13237_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m13369(__this, ___index, ___item, method) (( void (*) (Collection_1_t2705 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m13238_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m13370(__this, ___index, ___item, method) (( void (*) (Collection_1_t2705 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m13239_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m13371(__this, ___item, method) (( bool (*) (Collection_1_t2705 *, String_t*, MethodInfo*))Collection_1_Remove_m13240_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m13372(__this, ___index, method) (( void (*) (Collection_1_t2705 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m13241_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m13373(__this, ___index, method) (( void (*) (Collection_1_t2705 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m13242_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m13374(__this, method) (( int32_t (*) (Collection_1_t2705 *, MethodInfo*))Collection_1_get_Count_m13243_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m13375(__this, ___index, method) (( String_t* (*) (Collection_1_t2705 *, int32_t, MethodInfo*))Collection_1_get_Item_m13244_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m13376(__this, ___index, ___value, method) (( void (*) (Collection_1_t2705 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m13245_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m13377(__this, ___index, ___item, method) (( void (*) (Collection_1_t2705 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m13246_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m13378(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m13247_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m13379(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m13248_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m13380(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m13249_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m13381(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m13250_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m13382(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m13251_gshared)(__this /* static, unused */, ___list, method)
