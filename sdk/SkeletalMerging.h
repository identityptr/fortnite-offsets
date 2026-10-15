/**
 * decamp dumper generated SDK
 * Package: /Script/SkeletalMerging
 */
#pragma once
#include "Basic.h"

// /Script/SkeletalMerging.SkeletalMeshMergeParams
// Kind: ScriptStruct; super: none
struct FSkeletalMeshMergeParams
{
public:
    TArray<void*> MeshSectionMappings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UVTransformsPerMesh; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshesToMerge; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t StripTopLODS; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNeedsCpuAccess; // 0x0034 (Size: 0x1, Type: BoolProperty)
    // 0x0034 BoolProperty bSkeletonBefore (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    void* skeleton; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSkeletalMeshMergeParams, MeshSectionMappings) == 0, "Offset mismatch for FSkeletalMeshMergeParams::MeshSectionMappings");
static_assert(offsetof(FSkeletalMeshMergeParams, UVTransformsPerMesh) == 16, "Offset mismatch for FSkeletalMeshMergeParams::UVTransformsPerMesh");
static_assert(offsetof(FSkeletalMeshMergeParams, MeshesToMerge) == 32, "Offset mismatch for FSkeletalMeshMergeParams::MeshesToMerge");
static_assert(offsetof(FSkeletalMeshMergeParams, StripTopLODS) == 48, "Offset mismatch for FSkeletalMeshMergeParams::StripTopLODS");
static_assert(offsetof(FSkeletalMeshMergeParams, bNeedsCpuAccess) == 52, "Offset mismatch for FSkeletalMeshMergeParams::bNeedsCpuAccess");
static_assert(offsetof(FSkeletalMeshMergeParams, skeleton) == 56, "Offset mismatch for FSkeletalMeshMergeParams::skeleton");

// /Script/SkeletalMerging.SkeletonMergeParams
// Kind: ScriptStruct; super: none
struct FSkeletonMergeParams
{
public:
    TArray<void*> SkeletonsToMerge; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bMergeSockets; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeVirtualBones; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeCurveNames; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeBlendProfiles; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeAnimSlotGroups; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckSkeletonsCompatibility; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSkeletonMergeParams, SkeletonsToMerge) == 0, "Offset mismatch for FSkeletonMergeParams::SkeletonsToMerge");
static_assert(offsetof(FSkeletonMergeParams, bMergeSockets) == 16, "Offset mismatch for FSkeletonMergeParams::bMergeSockets");
static_assert(offsetof(FSkeletonMergeParams, bMergeVirtualBones) == 17, "Offset mismatch for FSkeletonMergeParams::bMergeVirtualBones");
static_assert(offsetof(FSkeletonMergeParams, bMergeCurveNames) == 18, "Offset mismatch for FSkeletonMergeParams::bMergeCurveNames");
static_assert(offsetof(FSkeletonMergeParams, bMergeBlendProfiles) == 19, "Offset mismatch for FSkeletonMergeParams::bMergeBlendProfiles");
static_assert(offsetof(FSkeletonMergeParams, bMergeAnimSlotGroups) == 20, "Offset mismatch for FSkeletonMergeParams::bMergeAnimSlotGroups");
static_assert(offsetof(FSkeletonMergeParams, bCheckSkeletonsCompatibility) == 21, "Offset mismatch for FSkeletonMergeParams::bCheckSkeletonsCompatibility");

// /Script/SkeletalMerging.SkeletalMergingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USkeletalMergingLibrary
{
public:
    std::uint8_t Opaque[1];
};
