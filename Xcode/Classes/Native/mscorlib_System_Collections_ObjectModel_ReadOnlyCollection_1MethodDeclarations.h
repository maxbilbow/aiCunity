#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2689;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1033;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Object[]
struct ObjectU5BU5D_t194;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t246;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m13197_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t* ___list, MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m13197(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2689 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m13197_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13198_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13198(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13198_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13199_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13199(__this, method) (( void (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13199_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13200_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13200(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13200_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13201_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13201(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13201_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13202_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13202(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13202_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13203_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13203(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2689 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13203_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13204_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13204(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13204_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13205_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13205(__this, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13205_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13206_gshared (ReadOnlyCollection_1_t2689 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13206(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2689 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13206_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13207_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13207(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13207_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m13208_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m13208(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m13208_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m13209_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m13209(__this, method) (( void (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m13209_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m13210_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m13210(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m13210_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13211_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13211(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13211_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m13212_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m13212(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m13212_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m13213_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m13213(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m13213_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13214_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13214(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13214_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13215_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13215(__this, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13215_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13216_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13216(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13216_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13217_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13217(__this, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13217_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13218_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13218(__this, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13218_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m13219_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m13219(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2689 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m13219_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m13220_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m13220(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2689 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m13220_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m13221_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m13221(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_Contains_m13221_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m13222_gshared (ReadOnlyCollection_1_t2689 * __this, ObjectU5BU5D_t194* ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m13222(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2689 *, ObjectU5BU5D_t194*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m13222_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m13223_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m13223(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m13223_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m13224_gshared (ReadOnlyCollection_1_t2689 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m13224(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2689 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m13224_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m13225_gshared (ReadOnlyCollection_1_t2689 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m13225(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2689 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m13225_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m13226_gshared (ReadOnlyCollection_1_t2689 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m13226(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2689 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m13226_gshared)(__this, ___index, method)
