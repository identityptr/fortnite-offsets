/**
 * decamp dumper generated SDK
 * Package: /Script/JunoMistRavenItems
 */
#pragma once
#include "Basic.h"

// /Script/JunoMistRavenItems.JunoAbility_ActivateMistRavenItemsHover
// Kind: Class; super: FortGameplayAbility
class UJunoAbility_ActivateMistRavenItemsHover
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    TArray<void*> StashedRunes; // 0x0B20 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EquippedRunes; // 0x0B30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoAbility_ActivateMistRavenItemsHover, StashedRunes) == 2848, "Offset mismatch for UJunoAbility_ActivateMistRavenItemsHover::StashedRunes");
static_assert(offsetof(UJunoAbility_ActivateMistRavenItemsHover, EquippedRunes) == 2864, "Offset mismatch for UJunoAbility_ActivateMistRavenItemsHover::EquippedRunes");

// /Script/JunoMistRavenItems.JunoMistRavenItemsHoverAttributeSet
// Kind: Class; super: FortAttributeSet
class UJunoMistRavenItemsHoverAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t MaxLateralSpeed[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAscendSpeed[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t HorizontalMovementForce[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendForce[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DescendForce[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HorizontalBrakingForce[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t DirectionChangeBonus[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZBrakingForce[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintMultiplier[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, MaxLateralSpeed) == 72, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::MaxLateralSpeed");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, MaxAscendSpeed) == 112, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::MaxAscendSpeed");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, HorizontalMovementForce) == 152, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::HorizontalMovementForce");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, AscendForce) == 192, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::AscendForce");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, DescendForce) == 232, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::DescendForce");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, HorizontalBrakingForce) == 272, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::HorizontalBrakingForce");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, DirectionChangeBonus) == 312, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::DirectionChangeBonus");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, ZBrakingForce) == 352, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::ZBrakingForce");
static_assert(offsetof(UJunoMistRavenItemsHoverAttributeSet, SprintMultiplier) == 392, "Offset mismatch for UJunoMistRavenItemsHoverAttributeSet::SprintMultiplier");

// /Script/JunoMistRavenItems.JunoMovementMode_ExtMistRavenItemsHover
// Kind: Class; super: FortMovementMode_ExtHover
class UJunoMovementMode_ExtMistRavenItemsHover
{
public:
    std::uint8_t Pad_0000[0xAF0]; // 0x0000
    std::uint8_t MaxLateralSpeedAttribute[0x38]; // 0x0AF0 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxAscendSpeedAttribute[0x38]; // 0x0B28 (Size: 0x38, Type: StructProperty)
    std::uint8_t HorizonalMovementForceAttribute[0x38]; // 0x0B60 (Size: 0x38, Type: StructProperty)
    std::uint8_t AscendForceAttribute[0x38]; // 0x0B98 (Size: 0x38, Type: StructProperty)
    std::uint8_t DescendForceAttribute[0x38]; // 0x0BD0 (Size: 0x38, Type: StructProperty)
    std::uint8_t HorizontalBrakingForceAttribute[0x38]; // 0x0C08 (Size: 0x38, Type: StructProperty)
    std::uint8_t DirectionChangeBonusAttribute[0x38]; // 0x0C40 (Size: 0x38, Type: StructProperty)
    std::uint8_t ZBrakingForceAttribute[0x38]; // 0x0C78 (Size: 0x38, Type: StructProperty)
    std::uint8_t SprintMultiplierAttribute[0x38]; // 0x0CB0 (Size: 0x38, Type: StructProperty)
    void* DescendAction; // 0x0CE8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SprintEnergyComponentQuery[0x48]; // 0x0CF0 (Size: 0x48, Type: StructProperty)
    std::uint8_t SprintEnergyConsumeRate[0x28]; // 0x0D38 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintEnergyUseTag[0x4]; // 0x0D60 (Size: 0x4, Type: StructProperty)
    std::uint8_t SprintCueTag[0x4]; // 0x0D64 (Size: 0x4, Type: StructProperty)
    std::uint8_t SprintBlockTags[0x20]; // 0x0D68 (Size: 0x20, Type: StructProperty)
    void* SprintEffect; // 0x0D88 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, MaxLateralSpeedAttribute) == 2800, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::MaxLateralSpeedAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, MaxAscendSpeedAttribute) == 2856, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::MaxAscendSpeedAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, HorizonalMovementForceAttribute) == 2912, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::HorizonalMovementForceAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, AscendForceAttribute) == 2968, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::AscendForceAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, DescendForceAttribute) == 3024, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::DescendForceAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, HorizontalBrakingForceAttribute) == 3080, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::HorizontalBrakingForceAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, DirectionChangeBonusAttribute) == 3136, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::DirectionChangeBonusAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, ZBrakingForceAttribute) == 3192, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::ZBrakingForceAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintMultiplierAttribute) == 3248, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintMultiplierAttribute");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, DescendAction) == 3304, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::DescendAction");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintEnergyComponentQuery) == 3312, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintEnergyComponentQuery");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintEnergyConsumeRate) == 3384, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintEnergyConsumeRate");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintEnergyUseTag) == 3424, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintEnergyUseTag");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintCueTag) == 3428, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintCueTag");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintBlockTags) == 3432, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintBlockTags");
static_assert(offsetof(UJunoMovementMode_ExtMistRavenItemsHover, SprintEffect) == 3464, "Offset mismatch for UJunoMovementMode_ExtMistRavenItemsHover::SprintEffect");

// /Script/JunoMistRavenItems.JunoMovementMode_MistRavenItemsHoverRuntimeData
// Kind: Class; super: FortMovementMode_HoverRuntimeData
class UJunoMovementMode_MistRavenItemsHoverRuntimeData
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bLocalSprinting; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty bSprinting (shared storage)
};

static_assert(offsetof(UJunoMovementMode_MistRavenItemsHoverRuntimeData, bLocalSprinting) == 120, "Offset mismatch for UJunoMovementMode_MistRavenItemsHoverRuntimeData::bLocalSprinting");
