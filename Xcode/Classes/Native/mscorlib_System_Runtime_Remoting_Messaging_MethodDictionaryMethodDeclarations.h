﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1823;
// System.String[]
struct StringU5BU5D_t215;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1030;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1830;
// System.Collections.IEnumerator
struct IEnumerator_t106;
// System.Collections.IDictionary
struct IDictionary_t1152;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1153;

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m9900 (MethodDictionary_t1823 * __this, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9901 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m9902 (MethodDictionary_t1823 * __this, StringU5BU5D_t215* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m9903 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m9904 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C" bool MethodDictionary_IsOverridenKey_m9905 (MethodDictionary_t1823 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C" Object_t * MethodDictionary_get_Item_m9906 (MethodDictionary_t1823 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m9907 (MethodDictionary_t1823 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C" Object_t * MethodDictionary_GetMethodProperty_m9908 (MethodDictionary_t1823 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C" void MethodDictionary_SetMethodProperty_m9909 (MethodDictionary_t1823 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C" Object_t * MethodDictionary_get_Values_m9910 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C" void MethodDictionary_Add_m9911 (MethodDictionary_t1823 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern "C" bool MethodDictionary_Contains_m9912 (MethodDictionary_t1823 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C" void MethodDictionary_Remove_m9913 (MethodDictionary_t1823 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C" int32_t MethodDictionary_get_Count_m9914 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m9915 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m9916 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C" void MethodDictionary_CopyTo_m9917 (MethodDictionary_t1823 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C" Object_t * MethodDictionary_GetEnumerator_m9918 (MethodDictionary_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
