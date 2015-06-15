#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t768;
struct SkeletonBone_t768_marshaled;

void SkeletonBone_t768_marshal(const SkeletonBone_t768& unmarshaled, SkeletonBone_t768_marshaled& marshaled);
void SkeletonBone_t768_marshal_back(const SkeletonBone_t768_marshaled& marshaled, SkeletonBone_t768& unmarshaled);
void SkeletonBone_t768_marshal_cleanup(SkeletonBone_t768_marshaled& marshaled);
