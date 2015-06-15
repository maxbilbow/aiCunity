#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>
struct Collection_1_t2785;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t2;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// UnityEngine.Transform[]
struct TransformU5BU5D_t116;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t3799;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t351;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m14092(__this, method) (( void (*) (Collection_1_t2785 *, MethodInfo*))Collection_1__ctor_m13216_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14093(__this, method) (( bool (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13217_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m14094(__this, ___array, ___index, method) (( void (*) (Collection_1_t2785 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13218_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14095(__this, method) (( Object_t * (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13219_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m14096(__this, ___value, method) (( int32_t (*) (Collection_1_t2785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m13220_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m14097(__this, ___value, method) (( bool (*) (Collection_1_t2785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m13221_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m14098(__this, ___value, method) (( int32_t (*) (Collection_1_t2785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13222_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m14099(__this, ___index, ___value, method) (( void (*) (Collection_1_t2785 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m13223_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m14100(__this, ___value, method) (( void (*) (Collection_1_t2785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m13224_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14101(__this, method) (( bool (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13225_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14102(__this, method) (( Object_t * (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13226_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14103(__this, method) (( bool (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13227_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14104(__this, method) (( bool (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13228_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m14105(__this, ___index, method) (( Object_t * (*) (Collection_1_t2785 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13229_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m14106(__this, ___index, ___value, method) (( void (*) (Collection_1_t2785 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13230_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Add(T)
#define Collection_1_Add_m14107(__this, ___item, method) (( void (*) (Collection_1_t2785 *, Transform_t2 *, MethodInfo*))Collection_1_Add_m13231_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Clear()
#define Collection_1_Clear_m14108(__this, method) (( void (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_Clear_m13232_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ClearItems()
#define Collection_1_ClearItems_m14109(__this, method) (( void (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_ClearItems_m13233_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Contains(T)
#define Collection_1_Contains_m14110(__this, ___item, method) (( bool (*) (Collection_1_t2785 *, Transform_t2 *, MethodInfo*))Collection_1_Contains_m13234_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m14111(__this, ___array, ___index, method) (( void (*) (Collection_1_t2785 *, TransformU5BU5D_t116*, int32_t, MethodInfo*))Collection_1_CopyTo_m13235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::GetEnumerator()
#define Collection_1_GetEnumerator_m14112(__this, method) (( Object_t* (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_GetEnumerator_m13236_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IndexOf(T)
#define Collection_1_IndexOf_m14113(__this, ___item, method) (( int32_t (*) (Collection_1_t2785 *, Transform_t2 *, MethodInfo*))Collection_1_IndexOf_m13237_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Insert(System.Int32,T)
#define Collection_1_Insert_m14114(__this, ___index, ___item, method) (( void (*) (Collection_1_t2785 *, int32_t, Transform_t2 *, MethodInfo*))Collection_1_Insert_m13238_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m14115(__this, ___index, ___item, method) (( void (*) (Collection_1_t2785 *, int32_t, Transform_t2 *, MethodInfo*))Collection_1_InsertItem_m13239_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Remove(T)
#define Collection_1_Remove_m14116(__this, ___item, method) (( bool (*) (Collection_1_t2785 *, Transform_t2 *, MethodInfo*))Collection_1_Remove_m13240_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m14117(__this, ___index, method) (( void (*) (Collection_1_t2785 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m13241_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m14118(__this, ___index, method) (( void (*) (Collection_1_t2785 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m13242_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Count()
#define Collection_1_get_Count_m14119(__this, method) (( int32_t (*) (Collection_1_t2785 *, MethodInfo*))Collection_1_get_Count_m13243_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Item(System.Int32)
#define Collection_1_get_Item_m14120(__this, ___index, method) (( Transform_t2 * (*) (Collection_1_t2785 *, int32_t, MethodInfo*))Collection_1_get_Item_m13244_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m14121(__this, ___index, ___value, method) (( void (*) (Collection_1_t2785 *, int32_t, Transform_t2 *, MethodInfo*))Collection_1_set_Item_m13245_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m14122(__this, ___index, ___item, method) (( void (*) (Collection_1_t2785 *, int32_t, Transform_t2 *, MethodInfo*))Collection_1_SetItem_m13246_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m14123(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m13247_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m14124(__this /* static, unused */, ___item, method) (( Transform_t2 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m13248_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m14125(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m13249_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m14126(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m13250_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m14127(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m13251_gshared)(__this /* static, unused */, ___list, method)
