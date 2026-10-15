/**
 * decamp dumper generated SDK
 * Package: /Script/SkeletalMeshDescription
 */
#pragma once
#include "Basic.h"

// /Script/SkeletalMeshDescription.BoneId
// Kind: ScriptStruct; super: ElementID
struct FBoneId
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBoneId, IDValue) == 0, "Offset mismatch for FBoneId::IDValue");

// /Script/SkeletalMeshDescription.SourceGeometryPartID
// Kind: ScriptStruct; super: ElementID
struct FSourceGeometryPartID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSourceGeometryPartID, IDValue) == 0, "Offset mismatch for FSourceGeometryPartID::IDValue");

// /Script/SkeletalMeshDescription.SkeletalMeshDescription
// Kind: Class; super: MeshDescriptionBase
class USkeletalMeshDescription
{
public:
    std::uint8_t Opaque[1];
};
