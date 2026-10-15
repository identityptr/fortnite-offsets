/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticCompanionsFrontendRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticCompanionsFrontendRuntime.FortPedestalSideIndexes
// Kind: ScriptStruct; super: none
struct FFortPedestalSideIndexes
{
public:
    TArray<void*> LeftSideIndexes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightSideIndexes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortPedestalSideIndexes, LeftSideIndexes) == 0, "Offset mismatch for FFortPedestalSideIndexes::LeftSideIndexes");
static_assert(offsetof(FFortPedestalSideIndexes, RightSideIndexes) == 16, "Offset mismatch for FFortPedestalSideIndexes::RightSideIndexes");

// /Script/CosmeticCompanionsFrontendRuntime.FortPlayerCompanionFrontendComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionFrontendComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PlayerCompanionClass[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    void* PlayerCompanion; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CompanionItemDefinition; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BackgroundOffsets; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Offsets; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemDefAdditionalOffset[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviewWithPawnContextTag[0x90]; // 0x0128 (Size: 0x90, Type: StructProperty)
    void* HologramMaterial; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionFrontendComponent, PlayerCompanionClass) == 192, "Offset mismatch for UFortPlayerCompanionFrontendComponent::PlayerCompanionClass");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, PlayerCompanion) == 224, "Offset mismatch for UFortPlayerCompanionFrontendComponent::PlayerCompanion");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, CompanionItemDefinition) == 232, "Offset mismatch for UFortPlayerCompanionFrontendComponent::CompanionItemDefinition");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, BackgroundOffsets) == 240, "Offset mismatch for UFortPlayerCompanionFrontendComponent::BackgroundOffsets");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, Offsets) == 256, "Offset mismatch for UFortPlayerCompanionFrontendComponent::Offsets");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, ItemDefAdditionalOffset) == 272, "Offset mismatch for UFortPlayerCompanionFrontendComponent::ItemDefAdditionalOffset");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, PreviewWithPawnContextTag) == 296, "Offset mismatch for UFortPlayerCompanionFrontendComponent::PreviewWithPawnContextTag");
static_assert(offsetof(UFortPlayerCompanionFrontendComponent, HologramMaterial) == 440, "Offset mismatch for UFortPlayerCompanionFrontendComponent::HologramMaterial");

// /Script/CosmeticCompanionsFrontendRuntime.FortPlayerCompanionPedestalAdjustComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionPedestalAdjustComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PrimaryGroupPedestalIndexes[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BackgroundGroupPedestalIndexes[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    float ExtraDistanceToMoveForCompanion; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0104
    std::uint8_t PedestalPadOffset[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerCompanionPedestalAdjustComponent, PrimaryGroupPedestalIndexes) == 192, "Offset mismatch for UFortPlayerCompanionPedestalAdjustComponent::PrimaryGroupPedestalIndexes");
static_assert(offsetof(UFortPlayerCompanionPedestalAdjustComponent, BackgroundGroupPedestalIndexes) == 224, "Offset mismatch for UFortPlayerCompanionPedestalAdjustComponent::BackgroundGroupPedestalIndexes");
static_assert(offsetof(UFortPlayerCompanionPedestalAdjustComponent, ExtraDistanceToMoveForCompanion) == 256, "Offset mismatch for UFortPlayerCompanionPedestalAdjustComponent::ExtraDistanceToMoveForCompanion");
static_assert(offsetof(UFortPlayerCompanionPedestalAdjustComponent, PedestalPadOffset) == 264, "Offset mismatch for UFortPlayerCompanionPedestalAdjustComponent::PedestalPadOffset");
