﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t2919;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t318;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IList_1_t2918;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t2915;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t3825;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m15383(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2919 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m13186_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15384(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2919 *, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13187_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15385(__this, method) (( void (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13188_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15386(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13189_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15387(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13190_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15388(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13191_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15389(__this, ___index, method) (( Entry_t318 * (*) (ReadOnlyCollection_1_t2919 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13192_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15390(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13193_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15391(__this, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13194_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15392(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2919 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13195_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15393(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13196_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m15394(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2919 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m13197_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m15395(__this, method) (( void (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m13198_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m15396(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m13199_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15397(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2919 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13200_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m15398(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m13201_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m15399(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2919 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m13202_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15400(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13203_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15401(__this, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13204_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15402(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13205_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15403(__this, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13206_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15404(__this, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13207_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m15405(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2919 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m13208_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m15406(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2919 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m13209_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define ReadOnlyCollection_1_Contains_m15407(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2919 *, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_Contains_m13210_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m15408(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2919 *, EntryU5BU5D_t2915*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m13211_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m15409(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m13212_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m15410(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2919 *, Entry_t318 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m13213_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define ReadOnlyCollection_1_get_Count_m15411(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2919 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m13214_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m15412(__this, ___index, method) (( Entry_t318 * (*) (ReadOnlyCollection_1_t2919 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m13215_gshared)(__this, ___index, method)
