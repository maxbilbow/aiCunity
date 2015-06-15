#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3620;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t883;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3616;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3979;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3618;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m22502(__this, method) (( void (*) (Collection_1_t3620 *, MethodInfo*))Collection_1__ctor_m13216_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22503(__this, method) (( bool (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13217_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m22504(__this, ___array, ___index, method) (( void (*) (Collection_1_t3620 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13218_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m22505(__this, method) (( Object_t * (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13219_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m22506(__this, ___value, method) (( int32_t (*) (Collection_1_t3620 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m13220_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m22507(__this, ___value, method) (( bool (*) (Collection_1_t3620 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m13221_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m22508(__this, ___value, method) (( int32_t (*) (Collection_1_t3620 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13222_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m22509(__this, ___index, ___value, method) (( void (*) (Collection_1_t3620 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m13223_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m22510(__this, ___value, method) (( void (*) (Collection_1_t3620 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m13224_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m22511(__this, method) (( bool (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13225_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m22512(__this, method) (( Object_t * (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13226_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m22513(__this, method) (( bool (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13227_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m22514(__this, method) (( bool (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13228_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m22515(__this, ___index, method) (( Object_t * (*) (Collection_1_t3620 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13229_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m22516(__this, ___index, ___value, method) (( void (*) (Collection_1_t3620 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13230_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m22517(__this, ___item, method) (( void (*) (Collection_1_t3620 *, PersistentCall_t883 *, MethodInfo*))Collection_1_Add_m13231_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m22518(__this, method) (( void (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_Clear_m13232_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m22519(__this, method) (( void (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_ClearItems_m13233_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m22520(__this, ___item, method) (( bool (*) (Collection_1_t3620 *, PersistentCall_t883 *, MethodInfo*))Collection_1_Contains_m13234_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m22521(__this, ___array, ___index, method) (( void (*) (Collection_1_t3620 *, PersistentCallU5BU5D_t3616*, int32_t, MethodInfo*))Collection_1_CopyTo_m13235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m22522(__this, method) (( Object_t* (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_GetEnumerator_m13236_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m22523(__this, ___item, method) (( int32_t (*) (Collection_1_t3620 *, PersistentCall_t883 *, MethodInfo*))Collection_1_IndexOf_m13237_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m22524(__this, ___index, ___item, method) (( void (*) (Collection_1_t3620 *, int32_t, PersistentCall_t883 *, MethodInfo*))Collection_1_Insert_m13238_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m22525(__this, ___index, ___item, method) (( void (*) (Collection_1_t3620 *, int32_t, PersistentCall_t883 *, MethodInfo*))Collection_1_InsertItem_m13239_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m22526(__this, ___item, method) (( bool (*) (Collection_1_t3620 *, PersistentCall_t883 *, MethodInfo*))Collection_1_Remove_m13240_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m22527(__this, ___index, method) (( void (*) (Collection_1_t3620 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m13241_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m22528(__this, ___index, method) (( void (*) (Collection_1_t3620 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m13242_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m22529(__this, method) (( int32_t (*) (Collection_1_t3620 *, MethodInfo*))Collection_1_get_Count_m13243_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m22530(__this, ___index, method) (( PersistentCall_t883 * (*) (Collection_1_t3620 *, int32_t, MethodInfo*))Collection_1_get_Item_m13244_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m22531(__this, ___index, ___value, method) (( void (*) (Collection_1_t3620 *, int32_t, PersistentCall_t883 *, MethodInfo*))Collection_1_set_Item_m13245_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m22532(__this, ___index, ___item, method) (( void (*) (Collection_1_t3620 *, int32_t, PersistentCall_t883 *, MethodInfo*))Collection_1_SetItem_m13246_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m22533(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m13247_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m22534(__this /* static, unused */, ___item, method) (( PersistentCall_t883 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m13248_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m22535(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m13249_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m22536(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m13250_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m22537(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m13251_gshared)(__this /* static, unused */, ___list, method)
