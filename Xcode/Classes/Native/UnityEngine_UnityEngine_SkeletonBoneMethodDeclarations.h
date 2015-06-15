#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t766;
struct SkeletonBone_t766_marshaled;

void SkeletonBone_t766_marshal(const SkeletonBone_t766& unmarshaled, SkeletonBone_t766_marshaled& marshaled);
void SkeletonBone_t766_marshal_back(const SkeletonBone_t766_marshaled& marshaled, SkeletonBone_t766& unmarshaled);
void SkeletonBone_t766_marshal_cleanup(SkeletonBone_t766_marshaled& marshaled);
