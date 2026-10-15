/**
 * decamp dumper generated SDK
 * Package: /Script/NaniteDisplacedMesh
 */
#pragma once
#include "Basic.h"

// /Script/NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
// Kind: ScriptStruct; super: none
struct FNaniteDisplacedMeshDisplacementMap
{
public:
    void* Texture; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float Magnitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Center; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::int32_t UVChannel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaskUVChannel; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Texture) == 0, "Offset mismatch for FNaniteDisplacedMeshDisplacementMap::Texture");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Magnitude) == 8, "Offset mismatch for FNaniteDisplacedMeshDisplacementMap::Magnitude");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Center) == 12, "Offset mismatch for FNaniteDisplacedMeshDisplacementMap::Center");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, UVChannel) == 16, "Offset mismatch for FNaniteDisplacedMeshDisplacementMap::UVChannel");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, MaskUVChannel) == 20, "Offset mismatch for FNaniteDisplacedMeshDisplacementMap::MaskUVChannel");

// /Script/NaniteDisplacedMesh.NaniteDisplacedMeshParams
// Kind: ScriptStruct; super: none
struct FNaniteDisplacedMeshParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NaniteDisplacedMesh.NaniteDisplacedMesh
// Kind: Class; super: Object
class UNaniteDisplacedMesh
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NaniteDisplacedMesh.NaniteDisplacedMeshComponent
// Kind: Class; super: StaticMeshComponent
class UNaniteDisplacedMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    void* DisplacedMesh; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNaniteDisplacedMeshComponent, DisplacedMesh) == 1712, "Offset mismatch for UNaniteDisplacedMeshComponent::DisplacedMesh");
