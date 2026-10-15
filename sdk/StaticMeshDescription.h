/**
 * decamp dumper generated SDK
 * Package: /Script/StaticMeshDescription
 */
#pragma once
#include "Basic.h"

// /Script/StaticMeshDescription.UVMapSettings
// Kind: ScriptStruct; super: none
struct FUVMapSettings
{
public:
    std::uint8_t Size[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t UVTile[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUVMapSettings, Size) == 0, "Offset mismatch for FUVMapSettings::Size");
static_assert(offsetof(FUVMapSettings, UVTile) == 24, "Offset mismatch for FUVMapSettings::UVTile");
static_assert(offsetof(FUVMapSettings, Position) == 40, "Offset mismatch for FUVMapSettings::Position");
static_assert(offsetof(FUVMapSettings, Rotation) == 64, "Offset mismatch for FUVMapSettings::Rotation");
static_assert(offsetof(FUVMapSettings, Scale) == 88, "Offset mismatch for FUVMapSettings::Scale");

// /Script/StaticMeshDescription.StaticMeshDescription
// Kind: Class; super: MeshDescriptionBase
class UStaticMeshDescription
{
public:
    std::uint8_t Opaque[1];
};
