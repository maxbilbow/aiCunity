﻿#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t3;
// UnityEngine.Collider
struct Collider_t94;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t752;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Collision
struct  Collision_t167  : public Object_t
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t8  ___m_RelativeVelocity_0;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3 * ___m_Rigidbody_1;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t94 * ___m_Collider_2;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t752* ___m_Contacts_3;
};
