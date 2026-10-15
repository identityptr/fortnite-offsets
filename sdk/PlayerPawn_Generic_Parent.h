/**
 * decamp dumper generated SDK
 * Package: /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent
 */
#pragma once
#include "Basic.h"

// /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// Kind: BlueprintGeneratedClass; super: FortPlayerPawn
class UPlayerPawn_Generic_Parent_C
{
public:
    std::uint8_t Pad_0000[0x4B30]; // 0x0000
    std::uint8_t UberGraphFrame[0x28]; // 0x4B30 (Size: 0x28, Type: StructProperty)
    TArray<void*> PawnHatMaterials; // 0x4B58 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnHeadMaterials; // 0x4B68 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnBodyMaterials; // 0x4B78 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnCharmMaterials; // 0x4B88 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnFaceMaterials; // 0x4B98 (Size: 0x10, Type: ArrayProperty)
    void* PlayerPostProcessFX; // 0x4BA8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SkeletalMeshes; // 0x4BB0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnMaterials_ALL; // 0x4BC0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t WaterCounter; // 0x4BD0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x4BD4
    std::uint8_t IsInWater; // 0x4BE0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x4BE1
    TArray<void*> PawnPartMaterials; // 0x4C00 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayerPawn_Generic_Parent_C, UberGraphFrame) == 19248, "Offset mismatch for UPlayerPawn_Generic_Parent_C::UberGraphFrame");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnHatMaterials) == 19288, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnHatMaterials");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnHeadMaterials) == 19304, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnHeadMaterials");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnBodyMaterials) == 19320, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnBodyMaterials");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnCharmMaterials) == 19336, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnCharmMaterials");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnFaceMaterials) == 19352, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnFaceMaterials");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PlayerPostProcessFX) == 19368, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PlayerPostProcessFX");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, SkeletalMeshes) == 19376, "Offset mismatch for UPlayerPawn_Generic_Parent_C::SkeletalMeshes");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnMaterials_ALL) == 19392, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnMaterials_ALL");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, WaterCounter) == 19408, "Offset mismatch for UPlayerPawn_Generic_Parent_C::WaterCounter");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, IsInWater) == 19424, "Offset mismatch for UPlayerPawn_Generic_Parent_C::IsInWater");
static_assert(offsetof(UPlayerPawn_Generic_Parent_C, PawnPartMaterials) == 19456, "Offset mismatch for UPlayerPawn_Generic_Parent_C::PawnPartMaterials");
